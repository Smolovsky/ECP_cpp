#pragma once
#include "stdafx.h"
#using <mscorlib.dll>
#using <system.core.dll>

using namespace System;
using namespace System::Net;
using namespace System::ComponentModel;
using namespace System::Net::Sockets;
using namespace System::IO;
using namespace System::Threading;
using namespace System::Drawing;
using namespace System::Windows::Forms;
using namespace System::Runtime::Serialization::Formatters::Binary;

[Serializable]
ref struct RSA_public_data{
private:
	static String^ object_label = "#rsa_public_data_{A0E9F4CC-2664-4471-B77B-2F710EF06C3B}#";
	static Char prop_separator = ':';
public:
	String^ public_key;
	String^ modN;
	
	RSA_public_data(String^ public_key, String^ modN)
	{
		this->public_key = public_key;
		this->modN = modN;
	}

	static RSA_public_data^ TryParseFromString(String^ data)
	{
		if (data->Contains(object_label))
		{
			data = data->Replace(object_label, "");

			array<String^>^ parse_data = data->Split(prop_separator);
			String^ pk = parse_data[0];
			String^ modN = parse_data[1];

			return gcnew RSA_public_data(pk, modN);
		}

		return nullptr;
	}

	String^ serialize_to_string()
	{
		return String::Format("{0}{1}{2}{3}", this->object_label, this->public_key, this->prop_separator, this-> modN);
	}
};

ref struct SignedMessage
{
private:
	static String^ object_label = "#signed_message_{308A1237-0BED-4982-B54F-54B94FA27166}#";
	static Char prop_separator = ':';

public:
	String^ text;
	String^ ecp;

	SignedMessage(String^ text, String^ ECP)
	{
		this->text = text;
		this->ecp = ECP;
	}

	static SignedMessage^ TryParseFromString(String^ data)
	{
		if (data->Contains(object_label))
		{
			data = data->Replace(object_label, "");

			array<String^>^ parse_data = data->Split(prop_separator);
			String^ text = parse_data[0];
			String^ ecp = parse_data[1];

			return gcnew SignedMessage(text, ecp);
		}

		return nullptr;
	}

	String^ serialize_to_string()
	{
		return String::Format("{0}{1}{2}{3}", this->object_label, this->text, this->prop_separator, this->ecp);
	}
};

//класс, выполняющий все операции для передачи данных по сети
ref class ConnectHERO
{

private:
	static DataGridView^ output;

	static TextBox^ public_open_key_input;
	static TextBox^ public_modN_input;

	static TcpListener^ listener;
	static TcpClient^ client;

	static StreamReader^ reader;
	static StreamWriter^ writer;
	
	static String^ msg_boofer;
	static Thread^ get_messages_thread;

	bool ConnectHERO::SendMessage(String^ msg)
	{
		try
		{
			writer->WriteLine(msg);
		}
		catch( Exception^ e)
		{
			MessageBox::Show("Подклюяение с собеседником отсувствует!\n"+e->Message);
		}

		return true;
	}

public:
	String^ ip;
	int port;
	bool is_server;
	bool have_connections;

	static BackgroundWorker^ bg_get_messages;
	static BackgroundWorker^ bg_get_client;

	//конструктор класса
	ConnectHERO::ConnectHERO(System::String^ ip, int port, DataGridView^ output, TextBox^ public_open_key_input, TextBox^ public_modN_input)
	{
		init_bg_workers();

		this->ip = ip;
		this->port = port;
		ConnectHERO::output = output;
		ConnectHERO::public_open_key_input = public_open_key_input;
		ConnectHERO::public_modN_input = public_modN_input;

		this->is_server = !ConnectToServer();
	}


	void init_bg_workers()
	{
		bg_get_messages = gcnew BackgroundWorker();
		bg_get_messages->WorkerReportsProgress = true;
		bg_get_messages->DoWork += gcnew DoWorkEventHandler(this, &ConnectHERO::bg_get_messages_do_work);
		bg_get_messages->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this,  &ConnectHERO::bg_get_messages_on_message);

		bg_get_client = gcnew BackgroundWorker();
		bg_get_client->WorkerReportsProgress = true;
		bg_get_client->DoWork += gcnew DoWorkEventHandler(this, &ConnectHERO::bg_get_client_do_work);
		bg_get_client->ProgressChanged += gcnew ProgressChangedEventHandler(this, &ConnectHERO::bg_get_client_on_changed);
		bg_get_client->RunWorkerCompleted += gcnew RunWorkerCompletedEventHandler(this, &ConnectHERO::bg_get_client_on_compleated);
			
	}
	
	void bg_get_messages_do_work(Object^ sender, DoWorkEventArgs^ e)
	{
		Thread::Sleep(500);
	
		String^ msg = String::Empty;
		msg = reader->ReadLine();

		if (msg != String::Empty)
		{
			if (TryParseAsRSA_data(msg)) return;
			if (TryParseAsSignedMessage(msg)) return;

			e->Result = msg;
		}		
	}

	bool TryParseAsRSA_data(String^ s)
	{
		RSA_public_data^ d = RSA_public_data::TryParseFromString(s);

		if (d != nullptr)
		{
			PrintPublicRSAonForm(d);
			return true;
		}

		return false;
	}

	bool TryParseAsSignedMessage(String^ s)
	{
		SignedMessage^ d = SignedMessage::TryParseFromString(s);

		if (d != nullptr)
		{
			post_message("Собеседник", d->text, d->ecp);
			return true;
		}

		return false;
	}


	static void PrintPublicRSAonForm(RSA_public_data^ d)
	{
		if (public_open_key_input->InvokeRequired)
		{
			public_open_key_input->Invoke(gcnew Action<RSA_public_data^>(&ConnectHERO::PrintPublicRSAonForm), d);
		}
		else
		{
			public_open_key_input->Text = d->public_key;
			public_modN_input->Text = d->modN;
		}
	}

	void ConnectHERO::bg_get_messages_on_message(Object^ sender, RunWorkerCompletedEventArgs^ e)
	{
		if (e != nullptr && e->Result != nullptr)
			post_message("Собеседник", e->Result->ToString() , "");
						 
		bg_get_messages->RunWorkerAsync();
		
	}
	
	void bg_get_client_do_work(Object^ sender, DoWorkEventArgs^ e)
	{
		listener = gcnew TcpListener(IPAddress::Any, this->port);
		listener->Start();
				
		bg_get_client->ReportProgress(50); //report msg
		
		client = listener->AcceptTcpClient();
		create_reader_writer(client);

		have_connections = true;
		e->Result = "Клиент подключен";
	}

	void bg_get_client_on_changed(Object^ sender, ProgressChangedEventArgs^ e)
	{
		post_message("Вы", "Ожидаю подключения собеседника", "");
	}

	void bg_get_client_on_compleated(Object^ sender, RunWorkerCompletedEventArgs^ e)
	{
		post_message("Вы", e->Result->ToString(), "");		
	}
	
	void create_reader_writer(TcpClient^ client)
	{
		writer = gcnew StreamWriter(client->GetStream());
		writer->AutoFlush = true;
		reader = gcnew StreamReader(client->GetStream());

		bg_get_messages->RunWorkerAsync();
	}
	
	bool ConnectHERO::StartServer()
	{
		try
		{
			bg_get_client->RunWorkerAsync();
				
			return true;
		}
		catch (Exception^ e){

			post_message("Вы", "Ошибка при запуске сервера: \n" + e->Message, "");
			return false;
		}
	}

	bool ConnectHERO::ConnectToServer()
	{
		try
		{
			client = gcnew TcpClient();
			client->Connect(System::Net::IPAddress::Parse(this->ip), this->port);

			create_reader_writer(client);

			have_connections = true;
			return true;
		}

		catch (Exception^ e){

			post_message("Вы", "Ошибка при подключении к серверу: \n" + e->Message, "");
			return false;
		}

	}

	bool ConnectHERO::StartMessageListener()
	{
		return false;
	}

	bool SendSignedMessage(String^ text, String^ ECP)
	{
		SignedMessage^ m = gcnew SignedMessage(text, ECP);
		SendMessage(m->serialize_to_string());

		return true;
	}

	void ConnectHERO::Publish_RSA_data(RSA_public_data^ data)
	{
		String^ m = data->serialize_to_string();
		SendMessage(m);
	}

	void close_connections()
	{
		listener->Server->Close();
		client->Close();

		reader->Close();
		writer->Close();

		have_connections = false;
	}

	static void post_message(String^ username, String^ msg, String^ ecp)
	{
		if (output->InvokeRequired)
		{
			output->Invoke(gcnew Action<String^, String^, String^>(&ConnectHERO::post_message), username, msg, ecp);
		}
		else
		{
			output->Rows->Add(username, msg, ecp);
			output->CurrentCell = output->Rows[output->RowCount-1]->Cells[0];
			//output->Rows[output->RowCount -1]->Selected = true;
		}
	}
	// длл для рисования графика функцми y = f(x)

};


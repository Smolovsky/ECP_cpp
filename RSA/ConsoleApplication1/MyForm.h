#pragma once
#using <mscorlib.dll>
#include "ConnectHERO.h"
#include "RSA_sign.h"

using namespace System::Text;

namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		
		
		MyForm(void)
		{
			InitializeComponent();
			
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private:
		ConnectHERO^ connectHERO;
		RSA_sign^ rsa_sign;
		Encoding^ enc;
	private: System::Windows::Forms::TextBox^  textBox_input;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button_send_message;


	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button_start;
	private: System::Windows::Forms::TextBox^  textBox_ip;


	private: System::Windows::Forms::RadioButton^  radioButton_client;

	private: System::Windows::Forms::RadioButton^  radioButton_server;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtBox_crypto_Public_e;

	private: System::Windows::Forms::TextBox^  txtBox_crypto_Public_n;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btn_Public_RSA_data;

	private: System::Windows::Forms::Button^  btnGen_A;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtBox_crypto_d;

	private: System::Windows::Forms::TextBox^  txtBox_crypto_e;

	private: System::Windows::Forms::TextBox^  txtBox_crypto_n;

	private: System::Windows::Forms::TextBox^  txtBoxSIGN_A;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::DataGridView^  dataGridView_output;


	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::CheckBox^  checkBox_calc_ECP;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  проверитьЭЦПToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox_input = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_send_message = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button_start = (gcnew System::Windows::Forms::Button());
			this->textBox_ip = (gcnew System::Windows::Forms::TextBox());
			this->radioButton_client = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton_server = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBox_crypto_Public_e = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_crypto_Public_n = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_Public_RSA_data = (gcnew System::Windows::Forms::Button());
			this->btnGen_A = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBox_crypto_d = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_crypto_e = (gcnew System::Windows::Forms::TextBox());
			this->txtBox_crypto_n = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxSIGN_A = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView_output = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->проверитьЭЦПToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkBox_calc_ECP = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_output))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox_input
			// 
			this->textBox_input->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox_input->Location = System::Drawing::Point(532, 238);
			this->textBox_input->Multiline = true;
			this->textBox_input->Name = L"textBox_input";
			this->textBox_input->Size = System::Drawing::Size(436, 74);
			this->textBox_input->TabIndex = 20;
			this->textBox_input->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxSIGN_A_TextChanged);
			this->textBox_input->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox_input_KeyPress);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(532, 222);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(140, 13);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Текст вашего сообщения:";
			// 
			// button_send_message
			// 
			this->button_send_message->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button_send_message->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button_send_message->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_send_message->ForeColor = System::Drawing::Color::White;
			this->button_send_message->Location = System::Drawing::Point(871, 360);
			this->button_send_message->Name = L"button_send_message";
			this->button_send_message->Size = System::Drawing::Size(98, 34);
			this->button_send_message->TabIndex = 18;
			this->button_send_message->Text = L"Отправить";
			this->button_send_message->UseVisualStyleBackColor = false;
			this->button_send_message->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button_start);
			this->groupBox2->Controls->Add(this->textBox_ip);
			this->groupBox2->Controls->Add(this->radioButton_client);
			this->groupBox2->Controls->Add(this->radioButton_server);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(12, 7);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(349, 49);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры соединения";
			// 
			// button_start
			// 
			this->button_start->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->button_start->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_start->ForeColor = System::Drawing::Color::White;
			this->button_start->Location = System::Drawing::Point(9, 18);
			this->button_start->Name = L"button_start";
			this->button_start->Size = System::Drawing::Size(70, 23);
			this->button_start->TabIndex = 22;
			this->button_start->Text = L"Старт";
			this->button_start->UseVisualStyleBackColor = false;
			this->button_start->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox_ip
			// 
			this->textBox_ip->Location = System::Drawing::Point(241, 19);
			this->textBox_ip->Name = L"textBox_ip";
			this->textBox_ip->Size = System::Drawing::Size(93, 20);
			this->textBox_ip->TabIndex = 0;
			this->textBox_ip->Text = L"127.0.0.1";
			// 
			// radioButton_client
			// 
			this->radioButton_client->AutoSize = true;
			this->radioButton_client->Location = System::Drawing::Point(166, 21);
			this->radioButton_client->Name = L"radioButton_client";
			this->radioButton_client->Size = System::Drawing::Size(61, 17);
			this->radioButton_client->TabIndex = 3;
			this->radioButton_client->Text = L"Клиент";
			this->radioButton_client->UseVisualStyleBackColor = true;
			// 
			// radioButton_server
			// 
			this->radioButton_server->AutoSize = true;
			this->radioButton_server->Checked = true;
			this->radioButton_server->Location = System::Drawing::Point(102, 21);
			this->radioButton_server->Name = L"radioButton_server";
			this->radioButton_server->Size = System::Drawing::Size(62, 17);
			this->radioButton_server->TabIndex = 2;
			this->radioButton_server->TabStop = true;
			this->radioButton_server->Text = L"Сервер";
			this->radioButton_server->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(2, 62);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(524, 332);
			this->groupBox1->TabIndex = 22;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Параметры электронной подписи";
			// 
			// groupBox4
			// 
			this->groupBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->txtBox_crypto_Public_e);
			this->groupBox4->Controls->Add(this->txtBox_crypto_Public_n);
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(10, 213);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(505, 108);
			this->groupBox4->TabIndex = 3;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Криптографические параметры абонента B";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(3, 64);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Открытый ключ:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(3, 22);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Модуль n:";
			// 
			// txtBox_crypto_Public_e
			// 
			this->txtBox_crypto_Public_e->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_crypto_Public_e->Location = System::Drawing::Point(5, 82);
			this->txtBox_crypto_Public_e->Name = L"txtBox_crypto_Public_e";
			this->txtBox_crypto_Public_e->Size = System::Drawing::Size(494, 20);
			this->txtBox_crypto_Public_e->TabIndex = 1;
			// 
			// txtBox_crypto_Public_n
			// 
			this->txtBox_crypto_Public_n->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_crypto_Public_n->Location = System::Drawing::Point(5, 38);
			this->txtBox_crypto_Public_n->Name = L"txtBox_crypto_Public_n";
			this->txtBox_crypto_Public_n->Size = System::Drawing::Size(494, 20);
			this->txtBox_crypto_Public_n->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->btn_Public_RSA_data);
			this->groupBox3->Controls->Add(this->btnGen_A);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->txtBox_crypto_d);
			this->groupBox3->Controls->Add(this->txtBox_crypto_e);
			this->groupBox3->Controls->Add(this->txtBox_crypto_n);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(10, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(506, 187);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Криптографические параметры";
			// 
			// btn_Public_RSA_data
			// 
			this->btn_Public_RSA_data->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_Public_RSA_data->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btn_Public_RSA_data->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Public_RSA_data->ForeColor = System::Drawing::Color::White;
			this->btn_Public_RSA_data->Location = System::Drawing::Point(400, 152);
			this->btn_Public_RSA_data->Name = L"btn_Public_RSA_data";
			this->btn_Public_RSA_data->Size = System::Drawing::Size(90, 23);
			this->btn_Public_RSA_data->TabIndex = 6;
			this->btn_Public_RSA_data->Text = L"Опубликовать";
			this->btn_Public_RSA_data->UseVisualStyleBackColor = false;
			this->btn_Public_RSA_data->Click += gcnew System::EventHandler(this, &MyForm::btn_PublicToB_Click);
			// 
			// btnGen_A
			// 
			this->btnGen_A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnGen_A->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->btnGen_A->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGen_A->ForeColor = System::Drawing::Color::White;
			this->btnGen_A->Location = System::Drawing::Point(303, 152);
			this->btnGen_A->Name = L"btnGen_A";
			this->btnGen_A->Size = System::Drawing::Size(90, 23);
			this->btnGen_A->TabIndex = 5;
			this->btnGen_A->Text = L"Генерировать";
			this->btnGen_A->UseVisualStyleBackColor = false;
			this->btnGen_A->Click += gcnew System::EventHandler(this, &MyForm::btnGen_A_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 106);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Закрытый ключ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(90, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Открытый ключ:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 22);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Модуль n:";
			// 
			// txtBox_crypto_d
			// 
			this->txtBox_crypto_d->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_crypto_d->Location = System::Drawing::Point(5, 122);
			this->txtBox_crypto_d->Name = L"txtBox_crypto_d";
			this->txtBox_crypto_d->Size = System::Drawing::Size(496, 20);
			this->txtBox_crypto_d->TabIndex = 2;
			// 
			// txtBox_crypto_e
			// 
			this->txtBox_crypto_e->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_crypto_e->Location = System::Drawing::Point(5, 83);
			this->txtBox_crypto_e->Name = L"txtBox_crypto_e";
			this->txtBox_crypto_e->Size = System::Drawing::Size(496, 20);
			this->txtBox_crypto_e->TabIndex = 1;
			// 
			// txtBox_crypto_n
			// 
			this->txtBox_crypto_n->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBox_crypto_n->Location = System::Drawing::Point(5, 38);
			this->txtBox_crypto_n->Name = L"txtBox_crypto_n";
			this->txtBox_crypto_n->Size = System::Drawing::Size(496, 20);
			this->txtBox_crypto_n->TabIndex = 0;
			// 
			// txtBoxSIGN_A
			// 
			this->txtBoxSIGN_A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxSIGN_A->Location = System::Drawing::Point(532, 335);
			this->txtBoxSIGN_A->Name = L"txtBoxSIGN_A";
			this->txtBoxSIGN_A->Size = System::Drawing::Size(434, 20);
			this->txtBoxSIGN_A->TabIndex = 23;
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(532, 319);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(104, 13);
			this->label7->TabIndex = 24;
			this->label7->Text = L"Цифровая подпись";
			// 
			// dataGridView_output
			// 
			this->dataGridView_output->AllowUserToAddRows = false;
			this->dataGridView_output->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView_output->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView_output->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView_output->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView_output->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_output->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView_output->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView_output->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView_output->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView_output->GridColor = System::Drawing::Color::Silver;
			this->dataGridView_output->Location = System::Drawing::Point(532, 7);
			this->dataGridView_output->MultiSelect = false;
			this->dataGridView_output->Name = L"dataGridView_output";
			this->dataGridView_output->RowHeadersVisible = false;
			this->dataGridView_output->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView_output->Size = System::Drawing::Size(436, 212);
			this->dataGridView_output->TabIndex = 26;
			this->dataGridView_output->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MyForm::dataGridView_output_RowsAdded);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Пользователь";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Текст сообщения";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ЭЦП";
			this->Column3->Name = L"Column3";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->проверитьЭЦПToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(163, 26);
			// 
			// проверитьЭЦПToolStripMenuItem
			// 
			this->проверитьЭЦПToolStripMenuItem->Name = L"проверитьЭЦПToolStripMenuItem";
			this->проверитьЭЦПToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->проверитьЭЦПToolStripMenuItem->Text = L"Проверить ЭЦП";
			this->проверитьЭЦПToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проверитьЭЦПToolStripMenuItem_Click);
			// 
			// checkBox_calc_ECP
			// 
			this->checkBox_calc_ECP->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBox_calc_ECP->AutoSize = true;
			this->checkBox_calc_ECP->Checked = true;
			this->checkBox_calc_ECP->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox_calc_ECP->ForeColor = System::Drawing::Color::White;
			this->checkBox_calc_ECP->Location = System::Drawing::Point(533, 363);
			this->checkBox_calc_ECP->Name = L"checkBox_calc_ECP";
			this->checkBox_calc_ECP->Size = System::Drawing::Size(180, 17);
			this->checkBox_calc_ECP->TabIndex = 27;
			this->checkBox_calc_ECP->Text = L"Вычислять цифровую подпись";
			this->checkBox_calc_ECP->UseVisualStyleBackColor = true;
			this->checkBox_calc_ECP->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox_calc_ECP_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(973, 397);
			this->Controls->Add(this->checkBox_calc_ECP);
			this->Controls->Add(this->dataGridView_output);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtBoxSIGN_A);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox_input);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_send_message);
			this->MinimumSize = System::Drawing::Size(788, 435);
			this->Name = L"MyForm";
			this->Text = L"Электронная цифровая подпись";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_output))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

//при загрузке приложение пытается подключиться к серверу с настройками по умолчанию
//если подключиться к серверу не удалось, приложение запускается в режиме сервера и ожидает подключение собеседника
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	ConnectHERO^ connectHERO = gcnew ConnectHERO("127.0.0.1", 3005, dataGridView_output, txtBox_crypto_Public_n, txtBox_crypto_Public_e);

	if (connectHERO->is_server){
		
		connectHERO->post_message("Вы",  "Не удалось подключиться к серверу", "");
		radioButton_server->Checked = true;

		if (connectHERO->StartServer())
			connectHERO->post_message("Вы", "Запущен сервер на " + connectHERO->ip, "");
	}
	else 
	{
		radioButton_server->Checked = false;
		connectHERO->post_message("Вы", String::Format("Соединение с {0}:{1} установлено!", connectHERO->ip, connectHERO->port), "");
	}
	enc = Encoding::Default;
}

		 
private: System::Void radioButton_server_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	connectHERO->is_server = radioButton_server ->Checked;
	textBox_ip ->Enabled = ! radioButton_server ->Checked;
}

private: System::Void radioButton_client_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	connectHERO->is_server = radioButton_server ->Checked;
	textBox_ip ->Enabled = !radioButton_server ->Checked;
}

		// сгенерировать крипотпараметры
private: System::Void btnGen_A_Click(System::Object^  sender, System::EventArgs^  e) {

	rsa_sign = gcnew RSA_sign();
	txtBox_crypto_e->Text = rsa_sign->E();
	txtBox_crypto_d->Text = rsa_sign->D();
	txtBox_crypto_n->Text = rsa_sign->N();
}

		 //опубликовать криптографические параметры
private: System::Void btn_PublicToB_Click(System::Object^  sender, System::EventArgs^  e) {

	if (!CheckCryptoInputs())
	{
		MessageBox::Show("Сгенерируйте криптографические параметры!");
		return;
	}

	RSA_public_data^ d = gcnew RSA_public_data(txtBox_crypto_n->Text, txtBox_crypto_e->Text);
	connectHERO->Publish_RSA_data(d);
}

		 //отправить сообщение
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	MessageToChat();
}
		 //при нажатии кнопки ввод отправить сообщение
private: System::Void textBox_input_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

	if (((int)e->KeyChar) == 13)
	{
		MessageToChat();
		e->Handled = true;
	}
}
	void MessageToChat()
	{
		if (!CheckMessageInput())
		{
			MessageBox::Show("Введите текст сообщения!");
			return;
		}

		connectHERO->post_message("Вы", textBox_input->Text, "это ваше сообщение");
		connectHERO->SendSignedMessage(textBox_input->Text, txtBoxSIGN_A->Text);
		textBox_input->Clear();
	}

	bool CheckMessageInput()
	{
		if (textBox_input->Text == "")
		{
			//MessageBox::Show("Введите текст сообщения!");
			return false;
		}
		return true;
	}

	bool CheckCryptoInputs()
	{
		if (txtBox_crypto_d->Text == "" || txtBox_crypto_e->Text == "" || txtBox_crypto_n->Text == "")
		{
			//MessageBox::Show("Необходимо сгенерировать криптографические ключи!");
			return false;
		}

		return true;
	}

	//подключиться к серверу или запустить сервер
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (connectHERO == nullptr || connectHERO->have_connections == false)
	{
		if (radioButton_server ->Checked)
		{
			connectHERO->StartServer();
		}
		if (radioButton_client->Checked)
		{
			connectHERO->ConnectToServer();
		}
	}
	else
	{
		MessageBox::Show("Подклюяение с собеседником уже установлено!");
	}
}

private: System::Void dataGridView_output_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {

	dataGridView_output->AutoResizeRows(
		DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
	
}

		//при вводе текста сгенерировать новую ЭЦП
private: System::Void txtBoxSIGN_A_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	if (!checkBox_calc_ECP->Checked) return;
	if (!CheckCryptoInputs())
	{
		txtBoxSIGN_A->Text = "Сгенерируйте криптографические параметры!";
		return;
	}

	if (!CheckMessageInput()) 
	{
		txtBoxSIGN_A->Text = "Введите текст сообщения!";
		return;
	}

	array<unsigned char>^ bText = enc->GetBytes(textBox_input->Text);
	txtBoxSIGN_A->Text = BigInteger(rsa_sign->CreateSignature(bText)).ToString();
}

private: System::Void checkBox_calc_ECP_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	txtBoxSIGN_A_TextChanged(nullptr, nullptr);
	if (!checkBox_calc_ECP->Checked) txtBoxSIGN_A->Text = "";
}

//контекстное мею - кнопка проверить ЭЦП
private: System::Void проверитьЭЦПToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	int i;

	try
	{
		i = dataGridView_output->SelectedRows[0]->Index;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Выберите сообщение!");
		return;
	}

	if (dataGridView_output->Rows[i]->Cells[2]->Value->ToString() == "")
	{
		MessageBox::Show("Сообщение было отправлено без ЭЦП");
		return;
	}
	
	if (txtBox_crypto_Public_n->Text == "" || txtBox_crypto_Public_e->Text == "")
	{
		MessageBox::Show("Не опубликованы криптографические параметры Абонента В");
		return;
	}

	if (dataGridView_output->Rows[i]->Cells[1]->Value->ToString() == "")
	{
		MessageBox::Show("Сообщение отсутствует");
		return;
	}

	String^ sign = dataGridView_output->Rows[i]->Cells[2]->Value->ToString();
	
	try
	{
		BigInteger^ S = gcnew BigInteger(sign, 10);
		BigInteger^ E = gcnew BigInteger(txtBox_crypto_Public_e->Text, 10);
		BigInteger^ n = gcnew BigInteger(txtBox_crypto_Public_n->Text, 10);

		String^ msg = dataGridView_output->Rows[i]->Cells[1]->Value->ToString();

		if (rsa_sign->VerifySignature(enc->GetBytes(msg), S->getBytes(), E->getBytes(),
			n->getBytes()))
		{
			MessageBox::Show("Цифровая подпись верна");
			return;
		}
		else
		{
			MessageBox::Show("Цифровая подпись не верна");
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Цифровая подпись не верна\n"+ e->Message);
	}
	
}

};
}

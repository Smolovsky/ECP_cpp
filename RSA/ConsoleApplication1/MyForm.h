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

	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  txtBoxPublic_Be;
	private: System::Windows::Forms::TextBox^  txtBoxPublic_Bn;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  btn_PublicToB;
	private: System::Windows::Forms::Button^  btnGen_A;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtBoxA_d;
	private: System::Windows::Forms::TextBox^  txtBoxA_e;
	private: System::Windows::Forms::TextBox^  txtBoxA_n;
	private: System::Windows::Forms::TextBox^  txtBoxSIGN_A;
	private: System::Windows::Forms::Label^  label7;

	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
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
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtBoxPublic_Be = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxPublic_Bn = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->btn_PublicToB = (gcnew System::Windows::Forms::Button());
			this->btnGen_A = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBoxA_d = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxA_e = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxA_n = (gcnew System::Windows::Forms::TextBox());
			this->txtBoxSIGN_A = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->проверитьЭЦПToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(532, 238);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(436, 74);
			this->textBox2->TabIndex = 20;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::txtBoxSIGN_A_TextChanged);

			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
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
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(899, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 34);
			this->button1->TabIndex = 18;
			this->button1->Text = L"Отправить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(12, 7);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(349, 49);
			this->groupBox2->TabIndex = 21;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Параметры соединения";
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(9, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Старт";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(241, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(93, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"127.0.0.1";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(166, 21);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(61, 17);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Text = L"Клиент";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(102, 21);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(62, 17);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Сервер";
			this->radioButton1->UseVisualStyleBackColor = true;
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
			this->groupBox4->Controls->Add(this->txtBoxPublic_Be);
			this->groupBox4->Controls->Add(this->txtBoxPublic_Bn);
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
			// txtBoxPublic_Be
			// 
			this->txtBoxPublic_Be->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxPublic_Be->Location = System::Drawing::Point(5, 82);
			this->txtBoxPublic_Be->Name = L"txtBoxPublic_Be";
			this->txtBoxPublic_Be->Size = System::Drawing::Size(494, 20);
			this->txtBoxPublic_Be->TabIndex = 1;
			// 
			// txtBoxPublic_Bn
			// 
			this->txtBoxPublic_Bn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxPublic_Bn->Location = System::Drawing::Point(5, 38);
			this->txtBoxPublic_Bn->Name = L"txtBoxPublic_Bn";
			this->txtBoxPublic_Bn->Size = System::Drawing::Size(494, 20);
			this->txtBoxPublic_Bn->TabIndex = 0;
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox3->Controls->Add(this->btn_PublicToB);
			this->groupBox3->Controls->Add(this->btnGen_A);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->txtBoxA_d);
			this->groupBox3->Controls->Add(this->txtBoxA_e);
			this->groupBox3->Controls->Add(this->txtBoxA_n);
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(10, 20);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(506, 187);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Криптографические параметры";
			// 
			// btn_PublicToB
			// 
			this->btn_PublicToB->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btn_PublicToB->ForeColor = System::Drawing::Color::White;
			this->btn_PublicToB->Location = System::Drawing::Point(400, 152);
			this->btn_PublicToB->Name = L"btn_PublicToB";
			this->btn_PublicToB->Size = System::Drawing::Size(90, 23);
			this->btn_PublicToB->TabIndex = 6;
			this->btn_PublicToB->Text = L"Опубликовать";
			this->btn_PublicToB->UseVisualStyleBackColor = true;
			this->btn_PublicToB->Click += gcnew System::EventHandler(this, &MyForm::btn_PublicToB_Click);
			// 
			// btnGen_A
			// 
			this->btnGen_A->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnGen_A->ForeColor = System::Drawing::Color::White;
			this->btnGen_A->Location = System::Drawing::Point(303, 152);
			this->btnGen_A->Name = L"btnGen_A";
			this->btnGen_A->Size = System::Drawing::Size(90, 23);
			this->btnGen_A->TabIndex = 5;
			this->btnGen_A->Text = L"Генерировать";
			this->btnGen_A->UseVisualStyleBackColor = true;
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
			// txtBoxA_d
			// 
			this->txtBoxA_d->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxA_d->Location = System::Drawing::Point(5, 122);
			this->txtBoxA_d->Name = L"txtBoxA_d";
			this->txtBoxA_d->Size = System::Drawing::Size(496, 20);
			this->txtBoxA_d->TabIndex = 2;
			// 
			// txtBoxA_e
			// 
			this->txtBoxA_e->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxA_e->Location = System::Drawing::Point(5, 83);
			this->txtBoxA_e->Name = L"txtBoxA_e";
			this->txtBoxA_e->Size = System::Drawing::Size(496, 20);
			this->txtBoxA_e->TabIndex = 1;
			// 
			// txtBoxA_n
			// 
			this->txtBoxA_n->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtBoxA_n->Location = System::Drawing::Point(5, 38);
			this->txtBoxA_n->Name = L"txtBoxA_n";
			this->txtBoxA_n->Size = System::Drawing::Size(496, 20);
			this->txtBoxA_n->TabIndex = 0;
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
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->Column1,
					this->Column2, this->Column3
			});
			this->dataGridView1->ContextMenuStrip = this->contextMenuStrip1;
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->GridColor = System::Drawing::Color::Silver;
			this->dataGridView1->Location = System::Drawing::Point(532, 7);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(436, 212);
			this->dataGridView1->TabIndex = 26;
			this->dataGridView1->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &MyForm::dataGridView1_RowsAdded);
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
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->checkBox1->AutoSize = true;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(533, 363);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(180, 17);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"Вычислять цифровую подпись";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(973, 397);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->txtBoxSIGN_A);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {

	ConnectHERO^ connectHERO = gcnew ConnectHERO("127.0.0.1", 3005, dataGridView1, txtBoxPublic_Bn, txtBoxPublic_Be);

	if (connectHERO->is_server){
		
		connectHERO->post_message("Вы",  "Не удалось подключиться к серверу", "");
		radioButton1->Checked = true;

		if (connectHERO->StartServer())
			connectHERO->post_message("Вы", "Запущен сервер на " + connectHERO->ip, "");
	}
	else 
	{
		radioButton1->Checked = false;
		connectHERO->post_message("Вы", String::Format("Соединение с {0}:{1} установлено!", connectHERO->ip, connectHERO->port), "");
	}
	enc = Encoding::Default;
}


private: System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	
	connectHERO->is_server = radioButton1->Checked;
	textBox1->Enabled = ! radioButton1->Checked;
}

private: System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	connectHERO->is_server = radioButton1->Checked;
	textBox1->Enabled = !radioButton1->Checked;
}

private: System::Void btnGen_A_Click(System::Object^  sender, System::EventArgs^  e) {

	rsa_sign = gcnew RSA_sign();
	txtBoxA_e->Text = rsa_sign->E();
	txtBoxA_d->Text = rsa_sign->D();
	txtBoxA_n->Text = rsa_sign->N();
}

private: System::Void btn_PublicToB_Click(System::Object^  sender, System::EventArgs^  e) {

	if (!CheckCryptoInputs())
	{
		MessageBox::Show("Сгенерируйте криптографические параметры!");
		return;
	}

	RSA_public_data^ d = gcnew RSA_public_data(txtBoxA_n->Text, txtBoxA_e->Text);
	connectHERO->Publish_RSA_data(d);
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {

	MessageToChat();
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

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

		connectHERO->post_message("Вы", textBox2->Text, "это ваше сообщение");
		connectHERO->SendSignedMessage(textBox2->Text, txtBoxSIGN_A->Text);
		textBox2->Clear();
	}

	bool CheckMessageInput()
	{
		if (textBox2->Text == "")
		{
			//MessageBox::Show("Введите текст сообщения!");
			return false;
		}
		return true;
	}

	bool CheckCryptoInputs()
	{
		if (txtBoxA_d->Text == "" || txtBoxA_e->Text == "" || txtBoxA_n->Text == "")
		{
			//MessageBox::Show("Необходимо сгенерировать криптографические ключи!");
			return false;
		}

		return true;
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

	if (connectHERO == nullptr || connectHERO->have_connections == false)
	{
		if (radioButton1->Checked)
		{
			connectHERO->StartServer();
		}
		if (radioButton2->Checked)
		{
			connectHERO->ConnectToServer();
		}
	}
	else
	{
		MessageBox::Show("Подклюяение с собеседником уже установлено!");
	}
}
private: System::Void dataGridView1_RowsAdded(System::Object^  sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^  e) {

	dataGridView1->AutoResizeRows(
		DataGridViewAutoSizeRowsMode::AllCellsExceptHeaders);
	
}
private: System::Void txtBoxSIGN_A_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	if (!checkBox1->Checked) return;
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

	array<unsigned char>^ bText = enc->GetBytes(textBox2->Text);
	txtBoxSIGN_A->Text = BigInteger(rsa_sign->CreateSignature(bText)).ToString();
}

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

	txtBoxSIGN_A_TextChanged(nullptr, nullptr);
	if (!checkBox1->Checked) txtBoxSIGN_A->Text = "";
}

private: System::Void проверитьЭЦПToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

	int i;

	try
	{
		i = dataGridView1->SelectedRows[0]->Index;
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Выберите сообщение!");
		return;
	}

	if (dataGridView1->Rows[i]->Cells[2]->Value->ToString() == "")
	{
		MessageBox::Show("Сообщение было отправлено без ЭЦП");
		return;
	}
	
	if (txtBoxPublic_Bn->Text == "" || txtBoxPublic_Be->Text == "")
	{
		MessageBox::Show("Не опубликованы криптографические параметры Абонента В");
		return;
	}

	if (dataGridView1->Rows[i]->Cells[1]->Value->ToString() == "")
	{
		MessageBox::Show("Сообщение отсутствует");
		return;
	}

	String^ sign = dataGridView1->Rows[i]->Cells[2]->Value->ToString();
	
	try
	{
		BigInteger^ S = gcnew BigInteger(sign, 10);
		BigInteger^ E = gcnew BigInteger(txtBoxPublic_Be->Text, 10);
		BigInteger^ n = gcnew BigInteger(txtBoxPublic_Bn->Text, 10);

		String^ msg = dataGridView1->Rows[i]->Cells[1]->Value->ToString();

		if (rsa_sign->VerifySignature(enc->GetBytes(msg), S->getBytes(), E->getBytes(),
			n->getBytes()))
		{
			MessageBox::Show("Цифровая подпись верна");
			return;
		}
	}
	catch (Exception^ e)
	{
		MessageBox::Show("Цифровая подпись не верна\n"+ e->Message);
	}
	
}

};
}

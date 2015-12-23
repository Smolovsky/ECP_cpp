namespace RSA_Sign
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabControl2 = new System.Windows.Forms.TabControl();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.btnSendToBSignMessage = new System.Windows.Forms.Button();
            this.txtBoxSIGN_A = new System.Windows.Forms.TextBox();
            this.btnSignA = new System.Windows.Forms.Button();
            this.rTxtBoxA = new System.Windows.Forms.RichTextBox();
            this.label16 = new System.Windows.Forms.Label();
            this.tabPage4 = new System.Windows.Forms.TabPage();
            this.btnVerifySign_fromB = new System.Windows.Forms.Button();
            this.label18 = new System.Windows.Forms.Label();
            this.txtBoxSIGN_fromB = new System.Windows.Forms.TextBox();
            this.rTextBoxInputMessageA = new System.Windows.Forms.RichTextBox();
            this.label17 = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.label5 = new System.Windows.Forms.Label();
            this.label6 = new System.Windows.Forms.Label();
            this.txtBoxPublic_Be = new System.Windows.Forms.TextBox();
            this.txtBoxPublic_Bn = new System.Windows.Forms.TextBox();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.btn_PublicToB = new System.Windows.Forms.Button();
            this.btnGen_A = new System.Windows.Forms.Button();
            this.label3 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.label1 = new System.Windows.Forms.Label();
            this.txtBoxA_d = new System.Windows.Forms.TextBox();
            this.txtBoxA_e = new System.Windows.Forms.TextBox();
            this.txtBoxA_n = new System.Windows.Forms.TextBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.tabControl3 = new System.Windows.Forms.TabControl();
            this.tabPage5 = new System.Windows.Forms.TabPage();
            this.btnSendToASignMessage = new System.Windows.Forms.Button();
            this.txtBoxSIGN_B = new System.Windows.Forms.TextBox();
            this.btnSignB = new System.Windows.Forms.Button();
            this.rTxtBoxB = new System.Windows.Forms.RichTextBox();
            this.label19 = new System.Windows.Forms.Label();
            this.tabPage6 = new System.Windows.Forms.TabPage();
            this.btnVerifySign_fromA = new System.Windows.Forms.Button();
            this.label20 = new System.Windows.Forms.Label();
            this.txtBoxSIGN_fromA = new System.Windows.Forms.TextBox();
            this.rTextBoxInputMessageB = new System.Windows.Forms.RichTextBox();
            this.label21 = new System.Windows.Forms.Label();
            this.groupBox5 = new System.Windows.Forms.GroupBox();
            this.label11 = new System.Windows.Forms.Label();
            this.label12 = new System.Windows.Forms.Label();
            this.txtBoxPublic_Ae = new System.Windows.Forms.TextBox();
            this.txtBoxPublic_An = new System.Windows.Forms.TextBox();
            this.groupBox6 = new System.Windows.Forms.GroupBox();
            this.btn_PublicToA = new System.Windows.Forms.Button();
            this.btnGen_B = new System.Windows.Forms.Button();
            this.label13 = new System.Windows.Forms.Label();
            this.label14 = new System.Windows.Forms.Label();
            this.label15 = new System.Windows.Forms.Label();
            this.txtBoxB_d = new System.Windows.Forms.TextBox();
            this.txtBoxB_e = new System.Windows.Forms.TextBox();
            this.txtBoxB_n = new System.Windows.Forms.TextBox();
            this.groupBox3 = new System.Windows.Forms.GroupBox();
            this.label4 = new System.Windows.Forms.Label();
            this.label7 = new System.Windows.Forms.Label();
            this.groupBox4 = new System.Windows.Forms.GroupBox();
            this.label8 = new System.Windows.Forms.Label();
            this.label9 = new System.Windows.Forms.Label();
            this.label10 = new System.Windows.Forms.Label();
            this.btnClose = new System.Windows.Forms.Button();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabControl2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.tabPage4.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabControl3.SuspendLayout();
            this.tabPage5.SuspendLayout();
            this.tabPage6.SuspendLayout();
            this.groupBox5.SuspendLayout();
            this.groupBox6.SuspendLayout();
            this.groupBox3.SuspendLayout();
            this.groupBox4.SuspendLayout();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Location = new System.Drawing.Point(12, 12);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(616, 435);
            this.tabControl1.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.tabControl2);
            this.tabPage1.Controls.Add(this.groupBox2);
            this.tabPage1.Controls.Add(this.groupBox1);
            this.tabPage1.Location = new System.Drawing.Point(4, 22);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(608, 409);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "Абонент А";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // tabControl2
            // 
            this.tabControl2.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl2.Controls.Add(this.tabPage3);
            this.tabControl2.Controls.Add(this.tabPage4);
            this.tabControl2.Location = new System.Drawing.Point(6, 225);
            this.tabControl2.Name = "tabControl2";
            this.tabControl2.SelectedIndex = 0;
            this.tabControl2.Size = new System.Drawing.Size(599, 167);
            this.tabControl2.TabIndex = 5;
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.btnSendToBSignMessage);
            this.tabPage3.Controls.Add(this.txtBoxSIGN_A);
            this.tabPage3.Controls.Add(this.btnSignA);
            this.tabPage3.Controls.Add(this.rTxtBoxA);
            this.tabPage3.Controls.Add(this.label16);
            this.tabPage3.Location = new System.Drawing.Point(4, 22);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(591, 141);
            this.tabPage3.TabIndex = 0;
            this.tabPage3.Text = "Отправить сообщение с ЭЦП";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // btnSendToBSignMessage
            // 
            this.btnSendToBSignMessage.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnSendToBSignMessage.Location = new System.Drawing.Point(485, 110);
            this.btnSendToBSignMessage.Name = "btnSendToBSignMessage";
            this.btnSendToBSignMessage.Size = new System.Drawing.Size(100, 23);
            this.btnSendToBSignMessage.TabIndex = 8;
            this.btnSendToBSignMessage.Text = "Отправить";
            this.btnSendToBSignMessage.UseVisualStyleBackColor = true;
            this.btnSendToBSignMessage.Click += new System.EventHandler(this.btnSendToBSignMessage_Click);
            // 
            // txtBoxSIGN_A
            // 
            this.txtBoxSIGN_A.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxSIGN_A.Location = new System.Drawing.Point(115, 75);
            this.txtBoxSIGN_A.Name = "txtBoxSIGN_A";
            this.txtBoxSIGN_A.Size = new System.Drawing.Size(473, 20);
            this.txtBoxSIGN_A.TabIndex = 7;
            // 
            // btnSignA
            // 
            this.btnSignA.Location = new System.Drawing.Point(6, 73);
            this.btnSignA.Name = "btnSignA";
            this.btnSignA.Size = new System.Drawing.Size(100, 23);
            this.btnSignA.TabIndex = 6;
            this.btnSignA.Text = "Вычислить ЭЦП";
            this.btnSignA.UseVisualStyleBackColor = true;
            this.btnSignA.Click += new System.EventHandler(this.btnSignA_Click);
            // 
            // rTxtBoxA
            // 
            this.rTxtBoxA.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.rTxtBoxA.Location = new System.Drawing.Point(115, 9);
            this.rTxtBoxA.Name = "rTxtBoxA";
            this.rTxtBoxA.Size = new System.Drawing.Size(473, 59);
            this.rTxtBoxA.TabIndex = 3;
            this.rTxtBoxA.Text = "";
            // 
            // label16
            // 
            this.label16.AutoSize = true;
            this.label16.Location = new System.Drawing.Point(13, 12);
            this.label16.Name = "label16";
            this.label16.Size = new System.Drawing.Size(68, 13);
            this.label16.TabIndex = 4;
            this.label16.Text = "Сообщение:";
            // 
            // tabPage4
            // 
            this.tabPage4.Controls.Add(this.btnVerifySign_fromB);
            this.tabPage4.Controls.Add(this.label18);
            this.tabPage4.Controls.Add(this.txtBoxSIGN_fromB);
            this.tabPage4.Controls.Add(this.rTextBoxInputMessageA);
            this.tabPage4.Controls.Add(this.label17);
            this.tabPage4.Location = new System.Drawing.Point(4, 22);
            this.tabPage4.Name = "tabPage4";
            this.tabPage4.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage4.Size = new System.Drawing.Size(591, 141);
            this.tabPage4.TabIndex = 1;
            this.tabPage4.Text = "Проверка ЭЦП полученного сообщения";
            this.tabPage4.UseVisualStyleBackColor = true;
            // 
            // btnVerifySign_fromB
            // 
            this.btnVerifySign_fromB.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnVerifySign_fromB.Location = new System.Drawing.Point(485, 110);
            this.btnVerifySign_fromB.Name = "btnVerifySign_fromB";
            this.btnVerifySign_fromB.Size = new System.Drawing.Size(100, 23);
            this.btnVerifySign_fromB.TabIndex = 12;
            this.btnVerifySign_fromB.Text = "Проверить ЭЦП";
            this.btnVerifySign_fromB.UseVisualStyleBackColor = true;
            this.btnVerifySign_fromB.Click += new System.EventHandler(this.btnVerifySign_fromB_Click);
            // 
            // label18
            // 
            this.label18.AutoSize = true;
            this.label18.Location = new System.Drawing.Point(13, 78);
            this.label18.Name = "label18";
            this.label18.Size = new System.Drawing.Size(33, 13);
            this.label18.TabIndex = 11;
            this.label18.Text = "ЭЦП:";
            // 
            // txtBoxSIGN_fromB
            // 
            this.txtBoxSIGN_fromB.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxSIGN_fromB.Location = new System.Drawing.Point(115, 75);
            this.txtBoxSIGN_fromB.Name = "txtBoxSIGN_fromB";
            this.txtBoxSIGN_fromB.Size = new System.Drawing.Size(473, 20);
            this.txtBoxSIGN_fromB.TabIndex = 10;
            // 
            // rTextBoxInputMessageA
            // 
            this.rTextBoxInputMessageA.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.rTextBoxInputMessageA.Location = new System.Drawing.Point(115, 9);
            this.rTextBoxInputMessageA.Name = "rTextBoxInputMessageA";
            this.rTextBoxInputMessageA.Size = new System.Drawing.Size(473, 59);
            this.rTextBoxInputMessageA.TabIndex = 8;
            this.rTextBoxInputMessageA.Text = "";
            // 
            // label17
            // 
            this.label17.AutoSize = true;
            this.label17.Location = new System.Drawing.Point(13, 12);
            this.label17.Name = "label17";
            this.label17.Size = new System.Drawing.Size(68, 13);
            this.label17.TabIndex = 9;
            this.label17.Text = "Сообщение:";
            // 
            // groupBox2
            // 
            this.groupBox2.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.groupBox2.Controls.Add(this.label5);
            this.groupBox2.Controls.Add(this.label6);
            this.groupBox2.Controls.Add(this.txtBoxPublic_Be);
            this.groupBox2.Controls.Add(this.txtBoxPublic_Bn);
            this.groupBox2.Location = new System.Drawing.Point(6, 143);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Size = new System.Drawing.Size(596, 76);
            this.groupBox2.TabIndex = 2;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Криптографические параметры абонента B";
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(6, 48);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(90, 13);
            this.label5.TabIndex = 3;
            this.label5.Text = "Открытый ключ:";
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(6, 22);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(57, 13);
            this.label6.TabIndex = 2;
            this.label6.Text = "Модуль n:";
            // 
            // txtBoxPublic_Be
            // 
            this.txtBoxPublic_Be.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxPublic_Be.Location = new System.Drawing.Point(102, 45);
            this.txtBoxPublic_Be.Name = "txtBoxPublic_Be";
            this.txtBoxPublic_Be.Size = new System.Drawing.Size(488, 20);
            this.txtBoxPublic_Be.TabIndex = 1;
            // 
            // txtBoxPublic_Bn
            // 
            this.txtBoxPublic_Bn.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxPublic_Bn.Location = new System.Drawing.Point(102, 19);
            this.txtBoxPublic_Bn.Name = "txtBoxPublic_Bn";
            this.txtBoxPublic_Bn.Size = new System.Drawing.Size(488, 20);
            this.txtBoxPublic_Bn.TabIndex = 0;
            // 
            // groupBox1
            // 
            this.groupBox1.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.groupBox1.Controls.Add(this.btn_PublicToB);
            this.groupBox1.Controls.Add(this.btnGen_A);
            this.groupBox1.Controls.Add(this.label3);
            this.groupBox1.Controls.Add(this.label2);
            this.groupBox1.Controls.Add(this.label1);
            this.groupBox1.Controls.Add(this.txtBoxA_d);
            this.groupBox1.Controls.Add(this.txtBoxA_e);
            this.groupBox1.Controls.Add(this.txtBoxA_n);
            this.groupBox1.Location = new System.Drawing.Point(6, 6);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(596, 131);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Криптографические параметры";
            // 
            // btn_PublicToB
            // 
            this.btn_PublicToB.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btn_PublicToB.Location = new System.Drawing.Point(484, 97);
            this.btn_PublicToB.Name = "btn_PublicToB";
            this.btn_PublicToB.Size = new System.Drawing.Size(91, 23);
            this.btn_PublicToB.TabIndex = 6;
            this.btn_PublicToB.Text = "Опубликовать";
            this.btn_PublicToB.UseVisualStyleBackColor = true;
            this.btn_PublicToB.Click += new System.EventHandler(this.btn_PublicToB_Click);
            // 
            // btnGen_A
            // 
            this.btnGen_A.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnGen_A.Location = new System.Drawing.Point(391, 97);
            this.btnGen_A.Name = "btnGen_A";
            this.btnGen_A.Size = new System.Drawing.Size(91, 23);
            this.btnGen_A.TabIndex = 5;
            this.btnGen_A.Text = "Генерировать";
            this.btnGen_A.UseVisualStyleBackColor = true;
            this.btnGen_A.Click += new System.EventHandler(this.btnGen_A_Click);
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(6, 74);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(90, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "Закрытый ключ:";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(6, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(90, 13);
            this.label2.TabIndex = 3;
            this.label2.Text = "Открытый ключ:";
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(6, 22);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(57, 13);
            this.label1.TabIndex = 2;
            this.label1.Text = "Модуль n:";
            // 
            // txtBoxA_d
            // 
            this.txtBoxA_d.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxA_d.Location = new System.Drawing.Point(102, 71);
            this.txtBoxA_d.Name = "txtBoxA_d";
            this.txtBoxA_d.Size = new System.Drawing.Size(488, 20);
            this.txtBoxA_d.TabIndex = 2;
            // 
            // txtBoxA_e
            // 
            this.txtBoxA_e.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxA_e.Location = new System.Drawing.Point(102, 45);
            this.txtBoxA_e.Name = "txtBoxA_e";
            this.txtBoxA_e.Size = new System.Drawing.Size(488, 20);
            this.txtBoxA_e.TabIndex = 1;
            // 
            // txtBoxA_n
            // 
            this.txtBoxA_n.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxA_n.Location = new System.Drawing.Point(102, 19);
            this.txtBoxA_n.Name = "txtBoxA_n";
            this.txtBoxA_n.Size = new System.Drawing.Size(488, 20);
            this.txtBoxA_n.TabIndex = 0;
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.tabControl3);
            this.tabPage2.Controls.Add(this.groupBox5);
            this.tabPage2.Controls.Add(this.groupBox6);
            this.tabPage2.Location = new System.Drawing.Point(4, 22);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(608, 409);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "Абонент В";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // tabControl3
            // 
            this.tabControl3.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom)
                        | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl3.Controls.Add(this.tabPage5);
            this.tabControl3.Controls.Add(this.tabPage6);
            this.tabControl3.Location = new System.Drawing.Point(6, 225);
            this.tabControl3.Name = "tabControl3";
            this.tabControl3.SelectedIndex = 0;
            this.tabControl3.Size = new System.Drawing.Size(599, 167);
            this.tabControl3.TabIndex = 6;
            // 
            // tabPage5
            // 
            this.tabPage5.Controls.Add(this.btnSendToASignMessage);
            this.tabPage5.Controls.Add(this.txtBoxSIGN_B);
            this.tabPage5.Controls.Add(this.btnSignB);
            this.tabPage5.Controls.Add(this.rTxtBoxB);
            this.tabPage5.Controls.Add(this.label19);
            this.tabPage5.Location = new System.Drawing.Point(4, 22);
            this.tabPage5.Name = "tabPage5";
            this.tabPage5.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage5.Size = new System.Drawing.Size(591, 141);
            this.tabPage5.TabIndex = 0;
            this.tabPage5.Text = "Отправить сообщение с ЭЦП";
            this.tabPage5.UseVisualStyleBackColor = true;
            // 
            // btnSendToASignMessage
            // 
            this.btnSendToASignMessage.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnSendToASignMessage.Location = new System.Drawing.Point(485, 110);
            this.btnSendToASignMessage.Name = "btnSendToASignMessage";
            this.btnSendToASignMessage.Size = new System.Drawing.Size(100, 23);
            this.btnSendToASignMessage.TabIndex = 8;
            this.btnSendToASignMessage.Text = "Отправить";
            this.btnSendToASignMessage.UseVisualStyleBackColor = true;
            this.btnSendToASignMessage.Click += new System.EventHandler(this.btnSendToASignMessage_Click);
            // 
            // txtBoxSIGN_B
            // 
            this.txtBoxSIGN_B.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxSIGN_B.Location = new System.Drawing.Point(115, 75);
            this.txtBoxSIGN_B.Name = "txtBoxSIGN_B";
            this.txtBoxSIGN_B.Size = new System.Drawing.Size(473, 20);
            this.txtBoxSIGN_B.TabIndex = 7;
            // 
            // btnSignB
            // 
            this.btnSignB.Location = new System.Drawing.Point(6, 73);
            this.btnSignB.Name = "btnSignB";
            this.btnSignB.Size = new System.Drawing.Size(100, 23);
            this.btnSignB.TabIndex = 6;
            this.btnSignB.Text = "Вычислить ЭЦП";
            this.btnSignB.UseVisualStyleBackColor = true;
            this.btnSignB.Click += new System.EventHandler(this.btnSignB_Click);
            // 
            // rTxtBoxB
            // 
            this.rTxtBoxB.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.rTxtBoxB.Location = new System.Drawing.Point(115, 9);
            this.rTxtBoxB.Name = "rTxtBoxB";
            this.rTxtBoxB.Size = new System.Drawing.Size(473, 59);
            this.rTxtBoxB.TabIndex = 3;
            this.rTxtBoxB.Text = "";
            // 
            // label19
            // 
            this.label19.AutoSize = true;
            this.label19.Location = new System.Drawing.Point(13, 12);
            this.label19.Name = "label19";
            this.label19.Size = new System.Drawing.Size(68, 13);
            this.label19.TabIndex = 4;
            this.label19.Text = "Сообщение:";
            // 
            // tabPage6
            // 
            this.tabPage6.Controls.Add(this.btnVerifySign_fromA);
            this.tabPage6.Controls.Add(this.label20);
            this.tabPage6.Controls.Add(this.txtBoxSIGN_fromA);
            this.tabPage6.Controls.Add(this.rTextBoxInputMessageB);
            this.tabPage6.Controls.Add(this.label21);
            this.tabPage6.Location = new System.Drawing.Point(4, 22);
            this.tabPage6.Name = "tabPage6";
            this.tabPage6.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage6.Size = new System.Drawing.Size(591, 141);
            this.tabPage6.TabIndex = 1;
            this.tabPage6.Text = "Проверка ЭЦП полученного сообщения";
            this.tabPage6.UseVisualStyleBackColor = true;
            // 
            // btnVerifySign_fromA
            // 
            this.btnVerifySign_fromA.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnVerifySign_fromA.Location = new System.Drawing.Point(485, 110);
            this.btnVerifySign_fromA.Name = "btnVerifySign_fromA";
            this.btnVerifySign_fromA.Size = new System.Drawing.Size(100, 23);
            this.btnVerifySign_fromA.TabIndex = 12;
            this.btnVerifySign_fromA.Text = "Проверить ЭЦП";
            this.btnVerifySign_fromA.UseVisualStyleBackColor = true;
            this.btnVerifySign_fromA.Click += new System.EventHandler(this.btnVerifySign_fromA_Click);
            // 
            // label20
            // 
            this.label20.AutoSize = true;
            this.label20.Location = new System.Drawing.Point(13, 78);
            this.label20.Name = "label20";
            this.label20.Size = new System.Drawing.Size(33, 13);
            this.label20.TabIndex = 11;
            this.label20.Text = "ЭЦП:";
            // 
            // txtBoxSIGN_fromA
            // 
            this.txtBoxSIGN_fromA.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxSIGN_fromA.Location = new System.Drawing.Point(115, 75);
            this.txtBoxSIGN_fromA.Name = "txtBoxSIGN_fromA";
            this.txtBoxSIGN_fromA.Size = new System.Drawing.Size(473, 20);
            this.txtBoxSIGN_fromA.TabIndex = 10;
            // 
            // rTextBoxInputMessageB
            // 
            this.rTextBoxInputMessageB.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.rTextBoxInputMessageB.Location = new System.Drawing.Point(115, 9);
            this.rTextBoxInputMessageB.Name = "rTextBoxInputMessageB";
            this.rTextBoxInputMessageB.Size = new System.Drawing.Size(473, 59);
            this.rTextBoxInputMessageB.TabIndex = 8;
            this.rTextBoxInputMessageB.Text = "";
            // 
            // label21
            // 
            this.label21.AutoSize = true;
            this.label21.Location = new System.Drawing.Point(13, 12);
            this.label21.Name = "label21";
            this.label21.Size = new System.Drawing.Size(68, 13);
            this.label21.TabIndex = 9;
            this.label21.Text = "Сообщение:";
            // 
            // groupBox5
            // 
            this.groupBox5.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.groupBox5.Controls.Add(this.label11);
            this.groupBox5.Controls.Add(this.label12);
            this.groupBox5.Controls.Add(this.txtBoxPublic_Ae);
            this.groupBox5.Controls.Add(this.txtBoxPublic_An);
            this.groupBox5.Location = new System.Drawing.Point(6, 143);
            this.groupBox5.Name = "groupBox5";
            this.groupBox5.Size = new System.Drawing.Size(596, 76);
            this.groupBox5.TabIndex = 4;
            this.groupBox5.TabStop = false;
            this.groupBox5.Text = "Криптографические параметры абонента А";
            // 
            // label11
            // 
            this.label11.AutoSize = true;
            this.label11.Location = new System.Drawing.Point(6, 48);
            this.label11.Name = "label11";
            this.label11.Size = new System.Drawing.Size(90, 13);
            this.label11.TabIndex = 3;
            this.label11.Text = "Открытый ключ:";
            // 
            // label12
            // 
            this.label12.AutoSize = true;
            this.label12.Location = new System.Drawing.Point(6, 22);
            this.label12.Name = "label12";
            this.label12.Size = new System.Drawing.Size(57, 13);
            this.label12.TabIndex = 2;
            this.label12.Text = "Модуль n:";
            // 
            // txtBoxPublic_Ae
            // 
            this.txtBoxPublic_Ae.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxPublic_Ae.Location = new System.Drawing.Point(102, 45);
            this.txtBoxPublic_Ae.Name = "txtBoxPublic_Ae";
            this.txtBoxPublic_Ae.Size = new System.Drawing.Size(488, 20);
            this.txtBoxPublic_Ae.TabIndex = 1;
            // 
            // txtBoxPublic_An
            // 
            this.txtBoxPublic_An.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxPublic_An.Location = new System.Drawing.Point(102, 19);
            this.txtBoxPublic_An.Name = "txtBoxPublic_An";
            this.txtBoxPublic_An.Size = new System.Drawing.Size(488, 20);
            this.txtBoxPublic_An.TabIndex = 0;
            // 
            // groupBox6
            // 
            this.groupBox6.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.groupBox6.Controls.Add(this.btn_PublicToA);
            this.groupBox6.Controls.Add(this.btnGen_B);
            this.groupBox6.Controls.Add(this.label13);
            this.groupBox6.Controls.Add(this.label14);
            this.groupBox6.Controls.Add(this.label15);
            this.groupBox6.Controls.Add(this.txtBoxB_d);
            this.groupBox6.Controls.Add(this.txtBoxB_e);
            this.groupBox6.Controls.Add(this.txtBoxB_n);
            this.groupBox6.Location = new System.Drawing.Point(6, 6);
            this.groupBox6.Name = "groupBox6";
            this.groupBox6.Size = new System.Drawing.Size(596, 131);
            this.groupBox6.TabIndex = 3;
            this.groupBox6.TabStop = false;
            this.groupBox6.Text = "Криптографические параметры";
            // 
            // btn_PublicToA
            // 
            this.btn_PublicToA.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btn_PublicToA.Location = new System.Drawing.Point(484, 97);
            this.btn_PublicToA.Name = "btn_PublicToA";
            this.btn_PublicToA.Size = new System.Drawing.Size(91, 23);
            this.btn_PublicToA.TabIndex = 6;
            this.btn_PublicToA.Text = "Опубликовать";
            this.btn_PublicToA.UseVisualStyleBackColor = true;
            this.btn_PublicToA.Click += new System.EventHandler(this.btn_PublicToA_Click);
            // 
            // btnGen_B
            // 
            this.btnGen_B.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.btnGen_B.Location = new System.Drawing.Point(391, 97);
            this.btnGen_B.Name = "btnGen_B";
            this.btnGen_B.Size = new System.Drawing.Size(91, 23);
            this.btnGen_B.TabIndex = 5;
            this.btnGen_B.Text = "Генерировать";
            this.btnGen_B.UseVisualStyleBackColor = true;
            this.btnGen_B.Click += new System.EventHandler(this.btnGen_B_Click);
            // 
            // label13
            // 
            this.label13.AutoSize = true;
            this.label13.Location = new System.Drawing.Point(6, 74);
            this.label13.Name = "label13";
            this.label13.Size = new System.Drawing.Size(90, 13);
            this.label13.TabIndex = 4;
            this.label13.Text = "Закрытый ключ:";
            // 
            // label14
            // 
            this.label14.AutoSize = true;
            this.label14.Location = new System.Drawing.Point(6, 48);
            this.label14.Name = "label14";
            this.label14.Size = new System.Drawing.Size(90, 13);
            this.label14.TabIndex = 3;
            this.label14.Text = "Открытый ключ:";
            // 
            // label15
            // 
            this.label15.AutoSize = true;
            this.label15.Location = new System.Drawing.Point(6, 22);
            this.label15.Name = "label15";
            this.label15.Size = new System.Drawing.Size(57, 13);
            this.label15.TabIndex = 2;
            this.label15.Text = "Модуль n:";
            // 
            // txtBoxB_d
            // 
            this.txtBoxB_d.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxB_d.Location = new System.Drawing.Point(102, 71);
            this.txtBoxB_d.Name = "txtBoxB_d";
            this.txtBoxB_d.Size = new System.Drawing.Size(488, 20);
            this.txtBoxB_d.TabIndex = 2;
            // 
            // txtBoxB_e
            // 
            this.txtBoxB_e.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxB_e.Location = new System.Drawing.Point(102, 45);
            this.txtBoxB_e.Name = "txtBoxB_e";
            this.txtBoxB_e.Size = new System.Drawing.Size(488, 20);
            this.txtBoxB_e.TabIndex = 1;
            // 
            // txtBoxB_n
            // 
            this.txtBoxB_n.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left)
                        | System.Windows.Forms.AnchorStyles.Right)));
            this.txtBoxB_n.Location = new System.Drawing.Point(102, 19);
            this.txtBoxB_n.Name = "txtBoxB_n";
            this.txtBoxB_n.Size = new System.Drawing.Size(488, 20);
            this.txtBoxB_n.TabIndex = 0;
            // 
            // groupBox3
            // 
            this.groupBox3.Controls.Add(this.label4);
            this.groupBox3.Controls.Add(this.label7);
            this.groupBox3.Location = new System.Drawing.Point(3, 143);
            this.groupBox3.Name = "groupBox3";
            this.groupBox3.Size = new System.Drawing.Size(581, 76);
            this.groupBox3.TabIndex = 2;
            this.groupBox3.TabStop = false;
            this.groupBox3.Text = "Криптографические параметры абонента B";
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(6, 48);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(90, 13);
            this.label4.TabIndex = 3;
            this.label4.Text = "Открытый ключ:";
            // 
            // label7
            // 
            this.label7.AutoSize = true;
            this.label7.Location = new System.Drawing.Point(6, 22);
            this.label7.Name = "label7";
            this.label7.Size = new System.Drawing.Size(57, 13);
            this.label7.TabIndex = 2;
            this.label7.Text = "Модуль n:";
            // 
            // groupBox4
            // 
            this.groupBox4.Controls.Add(this.label8);
            this.groupBox4.Controls.Add(this.label9);
            this.groupBox4.Controls.Add(this.label10);
            this.groupBox4.Location = new System.Drawing.Point(6, 6);
            this.groupBox4.Name = "groupBox4";
            this.groupBox4.Size = new System.Drawing.Size(581, 131);
            this.groupBox4.TabIndex = 1;
            this.groupBox4.TabStop = false;
            this.groupBox4.Text = "Криптографические параметры";
            // 
            // label8
            // 
            this.label8.AutoSize = true;
            this.label8.Location = new System.Drawing.Point(6, 74);
            this.label8.Name = "label8";
            this.label8.Size = new System.Drawing.Size(90, 13);
            this.label8.TabIndex = 4;
            this.label8.Text = "Закрытый ключ:";
            // 
            // label9
            // 
            this.label9.AutoSize = true;
            this.label9.Location = new System.Drawing.Point(6, 48);
            this.label9.Name = "label9";
            this.label9.Size = new System.Drawing.Size(90, 13);
            this.label9.TabIndex = 3;
            this.label9.Text = "Открытый ключ:";
            // 
            // label10
            // 
            this.label10.AutoSize = true;
            this.label10.Location = new System.Drawing.Point(6, 22);
            this.label10.Name = "label10";
            this.label10.Size = new System.Drawing.Size(57, 13);
            this.label10.TabIndex = 2;
            this.label10.Text = "Модуль n:";
            // 
            // btnClose
            // 
            this.btnClose.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Right)));
            this.btnClose.Location = new System.Drawing.Point(511, 453);
            this.btnClose.Name = "btnClose";
            this.btnClose.Size = new System.Drawing.Size(100, 23);
            this.btnClose.TabIndex = 9;
            this.btnClose.Text = "Закрыть";
            this.btnClose.UseVisualStyleBackColor = true;
            this.btnClose.Click += new System.EventHandler(this.btnClose_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(640, 497);
            this.Controls.Add(this.btnClose);
            this.Controls.Add(this.tabControl1);
            this.Name = "Form1";
            this.Text = "Цифровая подпись RSA";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabControl2.ResumeLayout(false);
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.tabPage4.ResumeLayout(false);
            this.tabPage4.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.groupBox2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.tabControl3.ResumeLayout(false);
            this.tabPage5.ResumeLayout(false);
            this.tabPage5.PerformLayout();
            this.tabPage6.ResumeLayout(false);
            this.tabPage6.PerformLayout();
            this.groupBox5.ResumeLayout(false);
            this.groupBox5.PerformLayout();
            this.groupBox6.ResumeLayout(false);
            this.groupBox6.PerformLayout();
            this.groupBox3.ResumeLayout(false);
            this.groupBox3.PerformLayout();
            this.groupBox4.ResumeLayout(false);
            this.groupBox4.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.TextBox txtBoxA_n;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox txtBoxA_d;
        private System.Windows.Forms.TextBox txtBoxA_e;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.TextBox txtBoxPublic_Be;
        private System.Windows.Forms.TextBox txtBoxPublic_Bn;
        private System.Windows.Forms.Button btn_PublicToB;
        private System.Windows.Forms.Button btnGen_A;
        private System.Windows.Forms.GroupBox groupBox5;
        private System.Windows.Forms.Label label11;
        private System.Windows.Forms.Label label12;
        private System.Windows.Forms.TextBox txtBoxPublic_Ae;
        private System.Windows.Forms.TextBox txtBoxPublic_An;
        private System.Windows.Forms.GroupBox groupBox6;
        private System.Windows.Forms.Button btn_PublicToA;
        private System.Windows.Forms.Button btnGen_B;
        private System.Windows.Forms.Label label13;
        private System.Windows.Forms.Label label14;
        private System.Windows.Forms.Label label15;
        private System.Windows.Forms.TextBox txtBoxB_d;
        private System.Windows.Forms.TextBox txtBoxB_e;
        private System.Windows.Forms.TextBox txtBoxB_n;
        private System.Windows.Forms.GroupBox groupBox3;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label7;
        private System.Windows.Forms.GroupBox groupBox4;
        private System.Windows.Forms.Label label8;
        private System.Windows.Forms.Label label9;
        private System.Windows.Forms.Label label10;
        private System.Windows.Forms.Label label16;
        private System.Windows.Forms.RichTextBox rTxtBoxA;
        private System.Windows.Forms.TabControl tabControl2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.TabPage tabPage4;
        private System.Windows.Forms.Button btnSignA;
        private System.Windows.Forms.Button btnSendToBSignMessage;
        private System.Windows.Forms.TextBox txtBoxSIGN_A;
        private System.Windows.Forms.Label label18;
        private System.Windows.Forms.TextBox txtBoxSIGN_fromB;
        private System.Windows.Forms.RichTextBox rTextBoxInputMessageA;
        private System.Windows.Forms.Label label17;
        private System.Windows.Forms.Button btnVerifySign_fromB;
        private System.Windows.Forms.TabControl tabControl3;
        private System.Windows.Forms.TabPage tabPage5;
        private System.Windows.Forms.Button btnSendToASignMessage;
        private System.Windows.Forms.TextBox txtBoxSIGN_B;
        private System.Windows.Forms.Button btnSignB;
        private System.Windows.Forms.RichTextBox rTxtBoxB;
        private System.Windows.Forms.Label label19;
        private System.Windows.Forms.TabPage tabPage6;
        private System.Windows.Forms.Button btnVerifySign_fromA;
        private System.Windows.Forms.Label label20;
        private System.Windows.Forms.TextBox txtBoxSIGN_fromA;
        private System.Windows.Forms.RichTextBox rTextBoxInputMessageB;
        private System.Windows.Forms.Label label21;
        private System.Windows.Forms.Button btnClose;
    }
}


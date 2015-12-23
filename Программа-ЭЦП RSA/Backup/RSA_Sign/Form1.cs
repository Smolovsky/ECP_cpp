using System;
using System.Text;
using System.Windows.Forms;

namespace RSA_Sign
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private RSA_Sign A_RSA_Sign;
        private RSA_Sign B_RSA_Sign;
        private readonly Encoding enc = Encoding.Default;

        private void Form1_Load(object sender, EventArgs e)
        {
            //A_RSA_Sign = new RSA_Sign();
            //B_RSA_Sign = new RSA_Sign();

            //btnGen_A_Click(sender, e);
            //btnGen_B_Click(sender, e);

            //btn_PublicToA_Click(sender, e);
            //btn_PublicToB_Click(sender, e);
        }

        private void btn_PublicToB_Click(object sender, EventArgs e)
        {
            txtBoxPublic_Ae.Text = txtBoxA_e.Text;
            txtBoxPublic_An.Text = txtBoxA_n.Text;
        }

        private void btn_PublicToA_Click(object sender, EventArgs e)
        {
            txtBoxPublic_Be.Text = txtBoxB_e.Text;
            txtBoxPublic_Bn.Text = txtBoxB_n.Text;
        }  

        private void btnGen_A_Click(object sender, EventArgs e)
        {
            A_RSA_Sign = new RSA_Sign();
            txtBoxA_e.Text = A_RSA_Sign.E;
            txtBoxA_d.Text = A_RSA_Sign.D;
            txtBoxA_n.Text = A_RSA_Sign.N;
        }
        private void btnGen_B_Click(object sender, EventArgs e)
        {
            B_RSA_Sign = new RSA_Sign();
            txtBoxB_e.Text = B_RSA_Sign.E;
            txtBoxB_d.Text = B_RSA_Sign.D;
            txtBoxB_n.Text = B_RSA_Sign.N;
        }

        private void btnSignA_Click(object sender, EventArgs e)
        {
            byte[] bText = enc.GetBytes(rTxtBoxA.Text);
            txtBoxSIGN_A.Text = new BigInteger(A_RSA_Sign.CreateSignature(bText)).ToString();

        }
        private void btnSignB_Click(object sender, EventArgs e)
        {
            byte[] bText = enc.GetBytes(rTxtBoxB.Text);
            txtBoxSIGN_B.Text = new BigInteger(B_RSA_Sign.CreateSignature(bText)).ToString();
        }

        private void btnVerifySign_fromB_Click(object sender, EventArgs e)
        {
            if (txtBoxPublic_Bn.Text=="" || txtBoxPublic_Be.Text=="")
            {
                MessageBox.Show("Не опубликованы криптографические параметры Абонента В");
                return;
            }
            if (rTextBoxInputMessageA.Text=="")
            {
                MessageBox.Show("Сообщение отсутствует");
                return;
            }
            BigInteger S = new BigInteger(txtBoxSIGN_fromB.Text,10);
            BigInteger E = new BigInteger(txtBoxPublic_Be.Text,10);
            BigInteger n = new BigInteger(txtBoxPublic_Bn.Text,10);

            if (A_RSA_Sign.VerifySignature(enc.GetBytes(rTextBoxInputMessageA.Text), S.getBytes(), E.getBytes(),
                                       n.getBytes()))
            {
                MessageBox.Show("Цифровая подпись верна");
                return;
            }
            MessageBox.Show("Цифровая подпись не верна");
            


        }

        private void btnVerifySign_fromA_Click(object sender, EventArgs e)
        {
            if (txtBoxPublic_An.Text == "" || txtBoxPublic_Ae.Text == "")
            {
                MessageBox.Show("Не опубликованы криптографические параметры Абонента A");
                return;
            }
            if (rTextBoxInputMessageB.Text == "")
            {
                MessageBox.Show("Сообщение отсутствует");
                return;
            }
            BigInteger S = new BigInteger(txtBoxSIGN_fromA.Text, 10);
            BigInteger E = new BigInteger(txtBoxPublic_Ae.Text, 10);
            BigInteger n = new BigInteger(txtBoxPublic_An.Text, 10);

            if (B_RSA_Sign.VerifySignature(enc.GetBytes(rTextBoxInputMessageB.Text), S.getBytes(), E.getBytes(),
                                       n.getBytes()))
            {
                MessageBox.Show("Цифровая подпись верна");
                return;
            }
            MessageBox.Show("Цифровая подпись не верна");

        }

        private void btnSendToASignMessage_Click(object sender, EventArgs e)
        {
            rTextBoxInputMessageA.Text = rTxtBoxB.Text;
            txtBoxSIGN_fromB.Text = txtBoxSIGN_B.Text;
        }

        private void btnSendToBSignMessage_Click(object sender, EventArgs e)
        {
            rTextBoxInputMessageB.Text = rTxtBoxA.Text;
            txtBoxSIGN_fromA.Text = txtBoxSIGN_A.Text;
        }

        private void btnClose_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        

        
    }
}
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace Araç_Kiralama_Uygulaması
{
    public partial class Login : Form
    {
        public Login()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            SqlConnection baglanti = new SqlConnection(@"Data Source=DESKTOP-7O42T0S\SQLEXPRESS;Initial Catalog=Test;Integrated Security=True");
            string sorgu = "SELECT * FROM parola WHERE kullaniciID='" + textBox1.Text.Trim() + "'AND Sifre='" + textBox2.Text.Trim() + "'";
            SqlDataAdapter sdata = new SqlDataAdapter(sorgu, baglanti);
            DataTable dt = new DataTable();
            sdata.Fill(dt);
            if(dt.Rows.Count > 0)
            {
                Main gecis = new Main();
                gecis.Show();
                this.Hide();
            }
            else
            {
                MessageBox.Show("Kullanıcı ID veya Şifre yanlış!");
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Bu Programın tüm hakları TheNortoFrame şirketine aittir.");
        }

        private void Login_Load(object sender, EventArgs e)
        {

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
          
        }
    }
}

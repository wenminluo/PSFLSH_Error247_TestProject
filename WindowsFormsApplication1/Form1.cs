using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

//NIST Refprop.dll test
using RefigerantProperties.NIST;
//using NIST.Refprop.Interface;


namespace WindowsFormsApplication1
{
   
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }



        private void button1_Click(object sender, EventArgs e)
        {
            NISTProperty NISTInstance = NISTProperty.getInstance;
            //NISTRefpropTest_0(NISTInstance);
            NISTRefpropTest_1(NISTInstance);
            int j = 0;
        }




    }
}

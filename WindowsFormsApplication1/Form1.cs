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

// NIST多线程调用测试
using System.Threading;
//


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

        private void btnMultithreadingTest_Click(object sender, EventArgs e)
        {
            //方法一：使用Thread类
            ThreadStart threadDelegate = new ThreadStart(ThreadFunTest);

            for ( int i = 0; i<4; ++i )
            {
                Thread newThread = new Thread(threadDelegate);
                newThread.Start();
            }

            int m = 0;
            int n = m;
       
        }

        public static void ThreadFunTest()
        {
            NISTProperty NISTInstance = NISTProperty.getInstance;
            NISTRefpropTest_0(NISTInstance);
            NISTRefpropTest_1(NISTInstance);

            Thread.Sleep(10000);
        }
    }
}

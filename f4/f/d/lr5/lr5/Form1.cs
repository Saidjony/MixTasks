using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lr5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            List<int> arrx = textBox1.Text.Split(' ').Select(int.Parse).ToList();
            List<int> arry = textBox2.Text.Split(' ').Select(int.Parse).ToList();
            int county = 0, countx = 0;
            List<int> arx=new List<int>(), ary=new List<int>();
            for (int i = 0; i < arrx.Count; i++)
            {
                arx.Add(arrx[i]);
                if (check(arrx[i]))
                {
                    if (arry.Count == county) { MessageBox.Show("простие элементы X больше чем элементы У"); return; }
                    arx.Add(arry[county]);
                    county++;
                }
                
            }
            for (int i = 0; i <arry.Count ; i++)
            {
                ary.Add(arry[i]);
                if(check(arry[i]))
                {
                    if(arrx.Count==countx){ MessageBox.Show("простие элементы Y больше чем элементы X"); return; }
                    ary.Add(arrx[countx]);
                    countx++;
                }
            }
            label3.Text = "";
            label3.Text+=(string.Join(" ",arx))+"\n\n";
            label3.Text+=(string.Join(" ",ary))+"\n";
        }

        
        bool check(int x)
        {
            if ((x % 2 == 0 || x % 3 == 0) && x>3) return false;
            else return true;
        }

        private void button2_Click(object sender, EventArgs e)
        {
            int n= int.Parse(textBox3.Text.Split(' ')[0]);
            int m = int.Parse(textBox3.Text.Split(' ')[1]);
            int[,] arr = new int[n,m];
            Random random = new Random();
            label6.Text = "";
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    arr[i, j] = random.Next(0, 10);
                    label6.Text += arr[i, j] + " ";
                }
                label6.Text += "\n";
            }
            int counti = -1,countj=-1;
            List<List<int>> myls = new List<List<int>>();
            List<int> ls = new List<int>();
            for (int i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    counti++;
                    for (int j = 0; j < m; j++)
                    {
                        if(j%2==1)
                        {
                            ls.Add(arr[i, j]);
                        }
                    }
                    myls.Add(ls);
                    
                }
            }
            label5.Text = ""; 
            int xn = (n + 1) / 2,con=0, xm = m / 2;
            for(int i=0;i<xn;i++)
            {
                for (int j = 0; j < xm; j++)
                { 
                    label5.Text += ls[con]+" ";
                    con++;
                }
                label5.Text += "\n";
            }
        }

        private void button4_Click(object sender, EventArgs e)
        {
            int n = int.Parse(textBox4.Text.Split(' ')[0]);
            int m = int.Parse(textBox4.Text.Split(' ')[1]);
            int[,] arr = new int[n, m];
            Random random = new Random();
            label7.Text = "";
            label8.Text = "";
            List<int> chet = new List<int>();
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    arr[i, j] = random.Next(0, 10);
                    label7.Text += arr[i, j] + " ";
                    if (arr[i, j] % 2 == 0) chet.Add(arr[i, j]);
                }
                label7.Text += "\n";
            }
            int[,] newarr = new int[n, m + chet.Count];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m+chet.Count-1; j++)
                {
                    if (j < m)
                        newarr[i, j] = arr[i, j];
                    else
                        newarr[i, j] = chet[j - m];
                    label8.Text += newarr[i, j] + " ";
                }
                label8.Text += "\n";
            }





        }
    }
}

 
  
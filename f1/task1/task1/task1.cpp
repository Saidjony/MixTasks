 
#include<math.h>
#include <iostream>
#include "stdafx.h"
#include <fstream>
#include<vector>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
    ifstream fin1("D:\\fork\\f1\\in1.txt", ios::in);
    ifstream fin2("D:\\fork\\f1\\in2.txt", ios::in);
    ofstream fout("D:\\fork\\f1\\out.txt", ios::out);
    vector<double> x;
    vector<double> y;
    vector<double> z;
    double read,read1;
    while(!fin1.eof()){
        fin1 >> read;
        fin2 >> read1;
        x.push_back(read);
        y.push_back(read1);
    }
    fin1.close();
    fin2.close();
    double e = 2.7182818284590452354;
    for (size_t i = 0; i < x.size(); i++)
    {
        if (x[i]<y[i])
        {
            z.push_back(cos(pow(x[i], 2) + 2 * y[i]));
        }
        else if (x[i] >= y[i])
        {
            z.push_back(pow(e, -abs(y[i] + x[i])));
        }
    }
    for (int i = 0; i < z.size(); i++)
    {
        cout <<"z["<<i<<"]= " << z[i] << endl;
        fout << "z["<<i<<"] = " << z[i] << endl;
    }
    fout.close();
}
 
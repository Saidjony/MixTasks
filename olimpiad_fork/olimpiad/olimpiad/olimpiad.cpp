#include<math.h>  
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "russian");
      double sred=0;
    int mass[50];
    cout << "вводите кол-во осадков в 50 год \n";
    for (size_t i = 0; i <50; i++)
    {
        cin >> mass[i];
        sred += mass[i];
    } 
    sred /= 50;

    for (size_t i = 0; i < 50; i++)
    {
         cout << "кол-во средней осадки на "<<i+1<<" году = "<< abs(sred-mass[i]) << endl;
    }
    cout << "кол-во средней осадки = " << sred << endl;
    system("pause");
    return 0;
} 
 
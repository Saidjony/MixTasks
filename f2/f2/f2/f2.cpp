#include <iostream>
#include<math.h>
#include<sstream>
#include<time.h>
using namespace std;
int sum(int n);
int main()
{
	setlocale(LC_ALL, "russian");
	srand(time(0));
	int sam=0; int count = 0;
	for (size_t i = 1; i < 11; i++)
	{
		 count = (10 + rand() % 80);
		 sam += sum(count);
		 cout << count << endl;
	}
	cout << sum << endl;
}

int sum(int n)
{
	while (n>10)
	{
		if (n % 10 == 2) return n;
		n /= 10;
		if (n % 10 == 2) return n;
	}
	return 0;
}
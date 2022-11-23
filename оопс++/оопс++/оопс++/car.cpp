#include "car.h"
#include<string>
using namespace std;
//инициализация методов
void car::doparking()
{
	parked = true;
}

void car::outparking()
{
	parked = false;
}

void car::car_color(string col)
{
	color = col;
}

void car::car_gosnum(int gosnum)
{
	gos_num = gosnum;
} 
 
void car::car_mark(string mark)
{
	marka = mark;
} 
//инициализация перемен
car::car()
{
	gos_num = 0;
	marka = "";
	color = "";
	parked = false; 
}  
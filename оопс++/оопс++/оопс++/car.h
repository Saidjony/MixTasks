#pragma once 
#include<string>
using namespace std; 
class car
{  
public:
	int gos_num;   //поля для определение свойств машины
	string marka;
	string color;
	bool parked; 

	void car_color(string color); //методы для инициализации переменных
	void car_gosnum(int gosnum);
	void car_mark(string mark);
	void doparking();
	void outparking();
	car();
};
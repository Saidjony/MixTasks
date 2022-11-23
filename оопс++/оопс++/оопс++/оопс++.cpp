#include <iostream>
#include <string>
#include"car.h"
using namespace std;

class parking //новый класс parking
{
public: //публичный поля для вызова функций из внешности
	parking();
	void parked_car(car car); //парковка машин
	void car_out(int car_num); //выход машин
	int get_all_car() { return count_all_car; }; //печатать кол-во всех машин
	int get_parked_car() { return count_parked_car; }; //печатать кол-во машин в автостоянке
	void show_all(); //показать всех машин
	void show_in_the_park();//показать машины, которое стоять в автостоянке
private:
	class node //узел для создания списка машин
	{
	public: 
		node* pnext;
		car mycar;
		node(car car, node* next=nullptr)
		{
			this->mycar = car;
			this->pnext = next;
		}

	};

	int count_all_car; //кол-во всех машин
	int count_parked_car; //кол-во машин в парке
	node* head;
	

	 

};
//инициализация класса parking
parking::parking()
{
	count_all_car = 0;
	count_parked_car = 0;
	head = nullptr;
}
//инициализия метода parked_car  для добавление машин
void parking::parked_car(car car)
{
	if (head == nullptr)
	{
		head = new node(car);
	}
	else
	{
		node* current = this->head;
		while (current->pnext!=nullptr)
		{
			current = current->pnext;
		}
		current->pnext = new node(car);
	}
	try //использование try catch для выявление ошибок
	{
		count_all_car++;
		count_parked_car++;
	}
	catch (const std::exception&)
	{
		cout << "app is wrong!!!" << endl; //вывод ошибки
	}
}
//метод car_out для ухода машины
void parking::car_out(int car_num)
{
	while (head!=nullptr)
	{
		if (head->mycar.gos_num == car_num)
		{
			head->mycar.outparking();
			count_parked_car--;
			break;
		} 
		head = head->pnext;
	} 
}
//метод show_all для показа всех машин
void parking::show_all()
{
	cout << "вывод всех машин: марка/цвет/номер" << endl;
	while (head!=nullptr)
	{
		cout << head->mycar.marka << " "<<head->mycar.color<<" "<<head->mycar.gos_num << endl;
		head = head->pnext;
	}
	cout << "кол-во " << get_all_car() << endl; // вывод кол-во машин
}
//метод show_in_the_park для показа машины в парке
void parking::show_in_the_park()
{
	cout << "вывод машины в парке: марка/цвет/номер" << endl;
	while (head!=nullptr)
	{
		if (head->mycar.parked)
		{
			cout << head->mycar.marka << " " << head->mycar.color << " " << head->mycar.gos_num << endl;
		}
		head = head->pnext;
	}
	cout << "кол-во " << get_parked_car() << endl; //вывод кол-во машин в парке
} 
int main()
{
    setlocale(LC_ALL, "ru");
	system("chcp 1251");
    car mycar; //создания экземпляр класса
    parking park; //создания экземпляр класса
	int input_num; //ввод вариант действий
	do
	{ 
		cout << "выберите вариант действий " << endl;
		cout << "1: парковка машин" << endl;
		cout << "2: выход машин" << endl;
		cout << "3: вывод машин, которые находятся в автостоянке " << endl;
		cout << "4: вывод всех машин "<<endl;
		cout << "5: выход из системы" << endl;
		cin >> input_num;
		
		switch (input_num)
		{
		case 1:
		{
			cout << "вводите гос номер ";
			int gos_num; cin >> gos_num;
			cout << "\nвводите цвет ";
			string color; cin >> color;
			cout << "\nвведите марку ";
			string mark; cin >> mark;
			mycar.car_gosnum(gos_num); //инициализация переменные класса mycar через их методы
			mycar.car_color(color);
			mycar.car_mark(mark);
			mycar.doparking();
			park.parked_car(mycar);
			cout << "\nмашина парковался!!!" << endl;
			break;
		}
		case 2:
		{
			cout << "введите номер машины, которое выходить из автостоянки ";
			int num; cin >> num; //номер машины которое уходить
			park.car_out(num);
			cout << "машина уехал" << endl;
			break;
		}
		case 3:
			park.show_in_the_park(); //показать машины в парке
			break;
		case 4:
			park.show_all(); //показать все машины 
			break;
		default:
			break;
		}
	} while (input_num != 5);  
    system("pause");
}  
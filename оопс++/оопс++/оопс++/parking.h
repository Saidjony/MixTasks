﻿#pragma once
#include"car.h"

class parking
{ 
private:
	car _car;
	parking* _next = nullptr;
	  
public:
	parking();
	parking(car mycar, parking* pnext);
	void add_car(car mycar, parking* next=nullptr);
	void rem_car(car mycar);
	void show_all_car();
	void show_present_car();
	 
};
  
/*
10.10, 08:59] Елена: Определить классы Автостоянка (Parking) и Автомо￾биль (Car). Для каждого автомобиля во втором классе зада￾ется госномер, марка, цвет и методы Парковаться и Покинуть
парковку. Если авто паркуется, то его данные заносятся в мас￾сив Автостоянки с соответствующей отметкой. При выезде эта
отметка снимается, но данные остаются. Программа должна
отвечать на запрос, присутствует ли конкретный автомобиль на
парковке, а также по запросу вывести список присутствующих
автомобилей. (В данном случае объект Автостоянки целесооб￾разно включить в Автомобиль.)
[10.10, 08:59] Елена: − разработать соответствующие классы, конструкторы,
поля и методы;
− поля класса сделать закрытыми; для чтения и измене￾ния их значений определить открытые методы;
– предусмотреть во всех вариантах консольный ввод дан￾ных для создания объектов и консольный вывод результатов.
– во всех вариантах необходимо использовать хотя бы
один раз блоки try catch. Это можно сделать для контроля ариф￾метических ошибок, для проверки существования файлов и
т.п. Отсутствие такового карается дополнительным уменьше￾нием оценки.
– во всех перечисленных вариантах не рекомендуется
пользоваться контейнерами STL, кроме string. */
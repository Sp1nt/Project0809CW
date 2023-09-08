#pragma once // файл дизайна
class Car
{
	//реализация класса - закрытая часть
	char* model;
	char* color;
	int year;
	double price;
public: //Интерфейс класса - открытая часть
	Car();
	Car(const char*m, const char*c, int y, double pr);
	~Car();
	void Input();
	void Print();

	//Инспекторы
	char* GetModel();
	char* GetColor();
	int GetYear();
	double GetPrice();

	//Модификаторы
	void SetModel(const char* m);
	void SetColor(const char* c);
	void SetYear(int y);
	void SetPrice(double pr);



};
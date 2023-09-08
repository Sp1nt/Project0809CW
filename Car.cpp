#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	this->model = nullptr;
	this->color = nullptr;

	year = 0;
	price = 0;
}

Car::Car(const char* m, const char* c, int y, double pr)
{
	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1,m);

	color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);

	this->price = pr;
	this->year = y;
}

Car::~Car()
{
	delete[] model;
	delete[] color;
}

void Car::Input()
{
	char buff[100];
	
	cout << "Input model car: ";
	cin >> buff;
	if (model != nullptr)
	{
		cout << "Delete -> " << model << "...\n";
			delete [] model;
	}

	this->model = new char[strlen(buff) + 1];
	strcpy_s(this->model, strlen(buff) + 1, buff);

	cout << "Input color car: ";
	cin >> buff;
	if (color != nullptr)
	{
		cout << "Delete -> " << color << "...\n";
		delete[] color;
	}

	this->color = new char[strlen(buff) + 1];
	strcpy_s(this->color, strlen(buff) + 1, buff);

	cout << "Input year: ";
	cin >> year;
	

	cout << "Input price: ";
	cin >> price;

}

void Car::Print()
{
	cout << "Model: " << this->model << endl;
	cout << "Color: " << this->color << endl;
	cout << "Year: " << this->year << endl;
	cout << "Price: " << this->price << endl;
}

char* Car::GetModel()
{
	return this->model;
}

char* Car::GetColor()
{
	return this->color;
}

int Car::GetYear()
{
	return this->year;
}

double Car::GetPrice()
{
	return this->price;
}

void Car::SetModel(const char* m)
{
	if (this->model) {
		cout << "Delete -> " << this->model << endl << endl;
		delete[] this->model;
	}

	this->model = new char[strlen(m) + 1];
	strcpy_s(this->model, strlen(m) + 1, m);
}

void Car::SetColor(const char* c)
{
	if (this->color) {
		cout << "Delete -> " << this->color << endl << endl;
		delete[] this->color;
	}

	this->color = new char[strlen(c) + 1];
	strcpy_s(this->color, strlen(c) + 1, c);
}

void Car::SetYear(int y)
{
	this->year = y;
}

void Car::SetPrice(double pr)
{
	this->price = pr;
}
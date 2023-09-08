#include <iostream>
#include "Car.h"
using namespace std;

int main()
{
	Car a("Audi A5", "White",2021, 24000);

	char* model = a.GetModel();
	cout << model << endl;

	char* color = a.GetColor();
	cout << color << endl;

	int year = a.GetYear();
	cout << year << endl;

	double price = a.GetPrice();
	cout << price << endl;

	cout << endl;

	a.Input();
	cout << endl;
	a.Print();


	
}

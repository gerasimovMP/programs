#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;

double Cel = 0, Kel = 0, Fahr = 0;

void setValue(int num)
{

	switch (num)
	{
	case 1:
	{
		cout << "Градусы Цельсия: ";
		cin >> Cel;
		Kel = Cel + 273;
		Fahr = Cel * 1.8 + 32;
	} break;
	case 2:
	{
		cout << "Кельвины: ";
		cin >> Kel;
		Cel = Kel - 273;
		Fahr = Kel * 1.8 - 459;
	} break;
	case 3:
	{
		cout << "Градусы Фаренгейта: ";
		cin >> Fahr;
		Cel = (Fahr - 32) / 1.8;
		Kel = (Fahr + 459) / 1.8;
	} break;
	default:exit(0);
	}
}

void getValue()
{
	cout << "Градусы Цельсия: " << Cel << endl;
	cout << "Кельвины: " << Kel << endl;
	cout << "Градусы Фаренгейта: " << Fahr << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int ch = 0;
	cout << "Выберите шкалу измерения: " << endl;
	cout << "(1) - Цельсий, (2) - Кельвины, (3) - Фаренгейт" << endl;

	cin >> ch;
	setValue(ch);
	getValue();
	system("pause");
	return 0;
}
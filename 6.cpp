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
		cout << "������� �������: ";
		cin >> Cel;
		Kel = Cel + 273;
		Fahr = Cel * 1.8 + 32;
	} break;
	case 2:
	{
		cout << "��������: ";
		cin >> Kel;
		Cel = Kel - 273;
		Fahr = Kel * 1.8 - 459;
	} break;
	case 3:
	{
		cout << "������� ����������: ";
		cin >> Fahr;
		Cel = (Fahr - 32) / 1.8;
		Kel = (Fahr + 459) / 1.8;
	} break;
	default:exit(0);
	}
}

void getValue()
{
	cout << "������� �������: " << Cel << endl;
	cout << "��������: " << Kel << endl;
	cout << "������� ����������: " << Fahr << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	int ch = 0;
	cout << "�������� ����� ���������: " << endl;
	cout << "(1) - �������, (2) - ��������, (3) - ���������" << endl;

	cin >> ch;
	setValue(ch);
	getValue();
	system("pause");
	return 0;
}
#include <iostream>
#include<locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	char ch = ' ';
	int num1 = 0;
	int j = 0;

	do
	{
		int num = rand();
		while (j <= 10)
		{
			cout << "Введите число: ";
			cin >> num1;
			j++;
			if (num < num1)
				cout << "Введенное число больше исходного" << endl;
			if (num > num1)
				cout << "Введенное число меньше исходного" << endl;
			if (j == 10)
			{
				cout << endl << "Вы не отгадали число  " << num << " за 10 попыток!" << endl; break;
			}
			if (num1 == num)
			{
				cout << endl << "Вы угадали число за " << j << "  попыток!" << endl; break;


				cout << "Retry? (y/n):_\b";
				cin >> ch;
				cout << endl; j = 0;
			}
			while (ch != 'n');
			system("pause");
			return 0;
		}
	}
}
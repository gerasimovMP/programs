#include <iostream>
#include <math.h>
#include <Locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "RUS");
	double x1, x2;
	double a, b, c;
	cout << "������� a,b,c\n";
	cin >> a ;
	cin >> b ;
	cin >> c;
	if (a == 0)
	{
		cout << "��������� �� �������� ����������";
	}
	else
	{
		double d = b*b - 4 * a*c;
		if (d<0)
		{
			cout << "��������� �� ����� ������� ";
		}
		if (d == 0)
		{
			cout << "��������� ����� ��� ���������� ����� :\n";
			x1 = -b / (2 * a);
			cout << "x = " << x1;
		}
		if (d>0)
		{
			cout << "����� ���������:\n";
			d = sqrt(d);
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
		}
	}
	system("pause");
	return 1;
}
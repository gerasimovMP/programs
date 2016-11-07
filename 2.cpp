#include  <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "rus");
	int a, s;
	cout << ("¬ведите двоичное число, использу€ 1 или 0");
	cin >> a;
	for (int i = 0; a; i++)
	{
		s= int(a % 10 * pow(2.0, i));
		a/= 10;
	}
	cout << " дес€тичное число = " << s << endl;
	system("pause");
	return 1;
}
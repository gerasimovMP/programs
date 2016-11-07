#include <iostream>;
#include<locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Rus");
	int N, k;
	cout << "число = ";
	cin >> N;
	cout << "степень числа = ";
	cin >> k;
	int pow;
	pow = N;
	for (int i = 0; i < k - 1; i++)
	{
		N = N*pow;
	}
	cout << N;
	system("pause");
	return 0;
}
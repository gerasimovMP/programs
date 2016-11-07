#include <iostream>
#include<locale.h>
using namespace std;
const int dl = 10;

int main()
{
	setlocale(LC_CTYPE, "Russian");
	float arr[dl];
	float sum = 0;    

	for (int i = 0; i < dl; i++) {
		cout << "¬ведите элемент массива " << i << ": ";
		cin >> arr[i];  
		sum += arr[i];  
	}
	cout << "—реднее арифметическое чисел в массиве: " << sum / dl << endl;
	system("pause");
	return 0;
}
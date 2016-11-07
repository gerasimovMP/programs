#include <iostream>;
using namespace std;
int main()
{
	int n;
	cout << "n=";
	cin >> n;
	if (n > 0) n = n * 2;
	else if (n < 0) n = n - 3;
	else if (n = 0) n = 10;
	cout << "n=" << n << endl;
	system("pause");
	return 0;
}

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
	int n, c = -1;
	cout << "N=" << endl;
	cin >> n;
	for (int i = 0; i <= n; i += 3)
	{
		c++;
	}
	cout << c << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <math.h>
using namespace std;

bool is_simple(int n)
{
	return (int)std::pow(3.0, (n - 1)) % n == 1;
}

int main(int argc, char* argv[])
{
	
		int N;
		cout << "N=";
		cin >> N;
		if (is_simple(N))
		{
			cout << "simple" << endl;
		}
		else
		{
			cout << "not simple" << endl;
		}
	
	system("pause");
	return 0;
}
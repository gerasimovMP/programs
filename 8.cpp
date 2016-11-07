#include <iostream>
#include<math.h>
#include<locale.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	double a[100][100], b[100][100], c[100][100];
	int i, j, l, n;
	double s(0);
	cout << "Введите размер квадратной матрицы:";
	cin >> n;
	cout << endl;

	cout << "Матрица а:" << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cin >> a[i][j];
		}
	}

	cout << "Матрица b: " << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cin >> b[i][j];
		}
	}

	for (i = 0; i<n; i++) {
		for (l = 0; l<n; l++) {
			s = 0;
			for (j = 0; j<n; j++) {
				s += a[i][j] * b[j][l];
			}
			c[i][l] = s;
		}
	}

	cout << "Результат:" << endl;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n; j++) {
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
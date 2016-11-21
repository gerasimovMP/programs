#include <iostream>
#include <math.h>
using namespace std;

int main(void)
{
       float x;
    float y;
    const double Pi = 3.14;
    cout << "x = " << endl;
    cin >> x;
    y = (abs(pow(x, 4) - cos(x))) - (pow((1 + pow(x, 1 / 6)), 1 / 9)) + (pow(sin(Pi / (pow(2.71, x) + 1)), 3));
    cout << "y =" << y << endl;
    system("pause");
    return 0;
}

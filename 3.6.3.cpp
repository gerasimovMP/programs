#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
 double x0, y0, r, y,  y1;
cout<<"x0=";
cin>>x0;
cout<<"y0=";
cin>>y0;
cout<<"r=";
cin>>r;
if ((sqrt(pow(r, 2) - pow(x0, 2))) > 0)
        {

            y = y0 + sqrt(pow(r, 2) - pow(x0, 2));
            y1 = y0 - sqrt(pow(r, 2) - pow(x0, 2));
            cout <<"y="<< y << "\n";
            cout <<"y="<< y1 << "\n";

        }
        else
            cout << "No crossing with Y" << "\n";

    system("pause");
    return 1;
}

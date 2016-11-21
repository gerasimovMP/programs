#include<iostream>
#include<math.h>
using namespace std;
int main(void)
{
    int x,y;
    cout<<"x = "<<endl;
    cin>>x;
    cout<<"y = "<<endl;
    cin>>y;
    if ((((x>=(-2))&&(x<=2)))&&(((y>=(-2))&&(y<=2))))
    {
            cout<<"Included"<<endl;
    }
    else
 {
    cout<<"Excluded"<<endl;
    }



    system("pause");
    return 1;
}

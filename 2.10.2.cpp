#include<iostream>

using namespace std;

int main(void)
{
   int B,KB,ost;
   cout<<"B="<<endl;
   cin>>B;
   KB = B/1024;
   cout<<"Kilobyte:"<<KB<<endl;
   ost = B % 1024;
   cout<<"Remain"<<ost<<endl;

    system("pause");
    return 0;
}

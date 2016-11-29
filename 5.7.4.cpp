#include <iostream>
#include <math.h>
 
using namespace std;
 
int main()
{
    int i,j,n;
    cout<<"  N=";
    cin>>n;
    int* a=new int[n];
    cout<<"  Enter elements: ";
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++)
       for(j=n-1;j>i;j--) 
          if (abs(a[j-1])<abs(a[j])) 
           {
              int x=a[j-1]; 
              a[j-1]=a[j]; 
              a[j]=x;
           }
    cout<<"  Result: ";
    for(i=0;i<n;i++) cout<<a[i]<<" "; 
    delete []a;  
    cout<<endl;             
    system("pause");
    return 1;
}
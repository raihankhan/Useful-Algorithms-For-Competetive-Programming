#include<bits/stdc++.h>
#define accuracy 0.0001
using namespace std;
int a,b,c,d,degree;
double m,n,x,z,sum;
int arr[10];
double fun(double x)
{
   sum=0;
   int i; z=degree;
   for(i=0;i<=degree;i++)
   {
       sum+=arr[i]*pow(x,z);
       z--;
   }
   return sum;
}
int main()
{
    int i;
    cout <<"enter the value of the highest degree of the equation" << endl;
    cin >> degree;
    cout <<"Enter the co-efficients :" <<endl;
    for(i=0;i<=degree;i++)
        cin >> arr[i];
    cout << "Enter two real number assuming the root is between them" << endl;
    cin >> m >> n ;
    while(fun(m)*fun(n)>=0)
    {
        cout << "Enter two real number assuming the root is between them (again)" << endl;
        cin >> m >> n ;
    }
    while(abs(n-m)>accuracy)
    {
        x=(m+n)/2;
        if(fun(x)==0) break;
        else if(fun(m)*fun(x)<0) n=x;
        else m=x;
    }
   printf(" the root of the equation is\n %.4lf",x);
   return 0;
}

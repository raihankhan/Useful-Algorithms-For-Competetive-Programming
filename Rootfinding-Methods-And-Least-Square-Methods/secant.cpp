#include<bits/stdc++.h>
#define accuracy 0.05
using namespace std;
int a,b,c,d,degree;
double m,n,x,z,sum,k,loop=0;
int arr[100];
double f(double x)
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
    while(f(m)*f(n)>=0)
    {
        cout << "Enter two real number assuming the root is between them (again)" << endl;
        cin >> m >> n ;
    }
    while(1)
    {
        x=(m*f(n)-n*f(m))/float(f(n)-f(m));
        if(loop>1)
        {
            if(abs(   ((  1-(k/x) )*100) <=accuracy   ) ) break;
        }
        if(f(x)==0) break;
        m=n;
        n=x;
        k=x;
        loop++;
    }
   cout  << " the root of the equation is"<<endl<< x << endl;
   return 0;
}


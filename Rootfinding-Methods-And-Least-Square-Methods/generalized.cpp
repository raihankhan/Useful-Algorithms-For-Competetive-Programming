#include<bits/stdc++.h>
#define accuracy 0.05
using namespace std;
int a,b,c,d,degree,i;
double m,n,x,z,sum,sum1,sum2,k,loop=0;
int arr[100];
double f1(double x)
{
   sum1=0;
   z=degree;
   for(i=0;i<=degree;i++)
   {
       sum1+=arr[i]*pow(x,z);
       z--;
   }
 return sum1;
}
double f2(double x)
{
 z=degree;
 sum=0;
   for(i=0;i<degree;i++)
   {
       sum2+=arr[i]*z*pow(x,z-1);
       z--;
   }
   return sum2;
}
double f(double x)
{
    sum=0;
    sum=x-(sum1/sum2);
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
    cout << "Enter a real number assuming the root " << endl;
    cin >> m ;

    while(1)
    {
        x=f(m);
        if(loop>0)
        {
            if(abs(   ((  1-(k/x) )*100) <=accuracy   ) ) break;
        }
        m=x;
        k=x;
        loop++;
    }
   cout  << " the root of the equation is"<<endl<< x << endl;
   return 0;
}

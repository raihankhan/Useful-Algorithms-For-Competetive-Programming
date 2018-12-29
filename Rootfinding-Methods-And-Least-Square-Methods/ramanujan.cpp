#include<bits/stdc++.h>
#define accuracy 0.0001
using namespace std;
int n,i,j,devider;
double power,arr[15],x,k,now,before;
double a[100],b[100] ;
int v=1;
double func(int j)
{
    double sum=0; int y=j;
    for(i=1;i<=3;i++)
        sum+=a[i]*b[y--];
    return sum;
}
int main()
{
    cout << "Enter the highest degree of the equation" << endl;
    cin >> n ;
    cout << "Enter the co-efficients and powers of the equation in the form of ax^" << n <<  "+ bx^" << n-1 << " + ........... + constant " << endl;
    for(i=0;i<=n ;i++)
    {
        cin >> arr[i];
    }
    for(i=n;i>=0;i--)
    {
        if(arr[i]!=0) {devider= i; break;}
    }
    k=arr[devider];
    for(i=devider-1;i>=0;i--)
    {
        a[v]=(-1) * arr[i]/k;
        v++;
    }
    b[1]=1;
    b[2]=a[1] ;
    b[3]=a[1]*b[2] + b[1]*a[2];
    j=3;
    before=b[1]/b[2];
    now=b[2]/b[3];
    while( abs (now-before)>=0.0001)
    {
          before=now;
          b[j+1]=func(j);
          now=b[j]/b[j+1];
          j++;
    }
cout << "the root of the equation is   :    "   << now << endl;
return 0;
}

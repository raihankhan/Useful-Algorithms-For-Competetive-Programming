#include<bits/stdc++.h>
using namespace std;
double function(double x,double *coeff,int n)
{
    double sum = 0;
    double arr[n+1];

    for(int i=1;i<=n;i++)
    {
        arr[i] = -1.0 * (coeff[i]/coeff[0]);
    }

    for(int i=1;i<=n;i++)
    {
        sum += arr[i] * pow(x,n-i);
    }
    sum = pow(sum,1.0/n);

    return sum;
}
double derivative(double x,double *coeff,int n)
{
    double sum1 = 0;
    double arr1[n+1];

    for(int i=1;i<=n;i++)
    {
        arr1[i] = -1.0 * (coeff[i]/coeff[0]);
    }

    for(int i=1;i<=n;i++)
    {
        sum1 += arr1[i] * pow(x,n-i);
    }

    sum1 = (1.0/n) * pow(sum1,((1.0/n)-1));

    double sum2 = 0;
    for(int i=1;i<=n-1;i++)
    {
        sum2 += (arr1[i]*(n-i)) * pow(x,n-i-1);
    }

    sum1 = sum1 * sum2;

    return sum1;
}
int main()
{
    cout << "Enter the degree of the equation\n";
    int n;
    cin >> n;
    double cff[n+1];
    cout << "\nEnter "<<n+1<<" co-efficients of the equation\n";
    for(int i=0;i<=n;i++)
        cin >> cff[i];
    cout << "\nEnter boundary values or terminal points\n";
    double a,b;
    cin >> a >> b;
    cout << "\nCorrection to how many decimal places\n";
    double dec;
    cin >> dec;
    double e = 1.0 / pow(10,dec);
    double k = ((1.0-derivative(b,cff,n))/derivative(b,cff,n)) * e;
    double x1 = (a+b)/2;
    double x2 = function(x1,cff,n);
    while (fabs(x2-x1)>k)
    {
        x1 = x2;
        x2 = function(x1,cff,n);
    }
    cout <<fixed<<setprecision(dec)<< "The value of root is : " << x2;
    return 0;
}

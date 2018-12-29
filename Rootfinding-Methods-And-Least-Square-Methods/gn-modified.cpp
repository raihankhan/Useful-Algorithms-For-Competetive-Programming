#include<bits/stdc++.h>
using namespace std;
double func(double v,double coeff[],int n)
{
    double sum = 0;

    for(int i=0;i<=n;i++)
    {
        if(coeff[i]==0)
            continue;
        sum += coeff[i] * pow(v,n-i);
    }
    return sum;
}
double derivative(double v,double coeff[],int n)
{
    double sum1 = 0;
    for(int i=0;i<n;i++)
    {
        sum1 += (coeff[i]*(n-i))  * pow(v,n-i-1);
    }
    return sum1;
}
void newton(double *arr,int n)
{
    cout << "\nEnter the approximate root\n";
    double x0;
    cin >> x0;
    cout << "\nCorrection to how many decimal places\n";
    double dec;
    cin >> dec;
    double e = 1.0 / pow(10,dec);
    int p = n;
    double xi;
    while (p--)
    {
        xi = x0 - p * (func(x0,arr,n)/derivative(x0,arr,n));
        if (fabs( func(xi,arr,n) ) <= e)
        {
            cout <<fixed<<setprecision(dec)<< "The value of root is : " << xi;
            break;
        }
        if(p==1)
            {
                x0 = xi;
                p=n-1;
            }
    }

}

int main()
{
    cout << "Enter the degree of the equation\n";
    int n;
    cin >> n;
    double coeff[n+1];
    cout << "\nEnter "<<n+1<<" co-efficients of the equation\n";
    for(int i=0;i<=n;i++)
        cin >> coeff[i];
    newton(coeff,n);
    return 0;
}

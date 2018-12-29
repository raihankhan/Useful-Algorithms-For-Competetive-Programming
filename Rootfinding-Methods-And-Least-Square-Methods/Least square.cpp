#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i;
    cout<<"Enter the number of data sets: ";
    cin>>m;
    cout<<endl;
    double x=0,y=0,x2=0,xy=0,a,b,determinant,a0,a1;
    cout<<"enter the elements in the form of x , y "<<endl;
    for(i=0;i<m;i++)
    {
        cin>>a>>b;
        x=x+a;
        y=y+b;
        x2=x2+ceil(pow(a,2));
        xy=xy+(a*b);
    }
    cout<<endl<<"The equations are : "<<endl<<endl;
    cout<<"EQUATION NUMBER 1: "<<m<<"a0 + "<<x<<"a1 = "<<y<<endl;
    cout<<"EQUATION NUMBER 2: "<<x<<"a0 + "<<x2<<"a1 = "<<xy<<endl;
    determinant=(m*x2)-(x*x);
    a0=((x2*y)-(x*xy))/determinant;
    a1=((m*xy)-(x*y))/determinant;
    cout<<endl<<"The value of a0 = "<<a0<<endl;
    cout<< "The value of  a1 = "<<a1<<endl;
    cout << "The straight line fit is given by  " << endl;
    cout << "Y  =  " << a0 << "  +  " << a1 << "x " << endl;
    return 0;
}

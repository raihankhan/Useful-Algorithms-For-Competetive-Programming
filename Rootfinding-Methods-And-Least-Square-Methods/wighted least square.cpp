#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter the number of data sets: ";
    cin>>n;
    cout<<endl;
    double x=0,y=0,w=0,wx=0,wx2=0,x2=0,wy=0,wxy=0,a,b,c,determinant,a0,a1;
    cout<<"Enter the values in the form of x,y and w: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        x=x+a;
        y=y+b;
        w=w+c;
        wx=wx+(a*c);
        wy=wy+(b*c);
        wx2=wx2+c*pow(a,2);
        wxy=wxy+(a*b*c);
    }

    cout<<endl<<"So the equations are :: "<<endl<<endl;
    cout<<"EQUATION NUMBER 1: "<<w<<"a0 + "<<wx<<"a1 = "<<wy<<endl;
    cout<<"EQUATION NUMBER 2: "<<wx<<"a0 + "<<wx2<<"a1 = "<<wxy<<endl;
    determinant=((w*wx2)-(wx*wx));
    a0=((wy*wx2)-(wx*wxy))/determinant;
    a1=((w*wxy)-(wx*wy))/determinant;
    cout<<"a0 = "<<a0<<endl;
    cout<<"a1 = "<<a1<<endl;
    cout << "The straight line fit is given by  " << endl;
    cout << "Y  =  " << a0 << "  +  " << a1 << "x " << endl;
    return 0;
}

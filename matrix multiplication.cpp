#include<bits/stdc++.h>
#define PI              acos(-1)
#define min3(a,b,c)     min(a,min(b,c))
#define max3(a,b,c)     max(a,max(b,c))
#define READ(f)         freopen(f, "r", stdin)
#define WRITE(f)        freopen(f, "w", stdout)
#define lli             long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define veci            vector<int>
#define vecl            vector<long long int>
#define pb              push_back
long power(long int x, long int y){ int temp; if( y == 0) return 1; temp = power(x, y/2); if (y%2 == 0) return temp*temp; else return x*temp*temp; }
/*lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}*/
using namespace std;


int main()
{

    int i,j,k;

    cout << "Enter the number rows and columns of first matrix " << endl;
    int r1,c1;
    cin >> r1 >> c1 ;
    cout << "Enter the elements" << endl;
    int A[r1][c1];
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
            cin >> A[i][j] ;
    }

    cout << "Enter the number rows and columns of second matrix " << endl;
    int r2,c2;
    cin >> r2 >> c2 ;
    while(r1!=c2 && r2!=c1)
    {
        cout << "The number of rows of first matrix must eqaul the number of columns of second matrix"<<endl;
        cout <<"Enter the numbers rows and columns of second matrix " << endl;
        cin >> r2 >> c2 ;
    }
    cout << "Enter the elements" << endl;
    int B[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
            cin >> B[i][j] ;
    }

    int C[r1][r1];
    memset(C,0,r1*r1*sizeof(C[0][0]));

    for(i=0;i<r1;i++)
    {
        for(j=0;j<r1;j++)
        {
            for(k=0;k<r1;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }

    cout << "The product of the matrices are" << endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout << C[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}




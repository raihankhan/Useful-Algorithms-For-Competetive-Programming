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
using namespace std;

lli gcd(lli x,lli y)
{
    if(x==0) return y;
    return gcd(y%x,x);
}
void divgcd(lli &a , lli &b)
{
    lli g= gcd(a,b);
    a/=g;
    b/=g;
}
lli C(lli n , lli k)
{
    lli numerator=1, denumerator=1,tomul,todiv,i;
    if(k>n/2) k=n-k;
    for(i=k;i>0;i--)
    {
        tomul=n-k+i;
        todiv=i;

        divgcd(tomul,todiv);
        divgcd(numerator,tomul);
        divgcd(denumerator,todiv);

        numerator*=tomul;
        denumerator*=todiv;

    }

    return numerator/denumerator;
}


int main()
{
    lli n,k;
    cin >> n >> k ;

    cout << n << "C" << k << "  =  " << C(n,k) << endl;


    return 0;
}




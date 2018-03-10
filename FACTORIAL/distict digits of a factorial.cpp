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
int multiply(int fact[],int fsize,int x)
{
    int carry=0,temp,i;
    for(i=0;i<fsize;i++)
    {
        temp=fact[i]*x + carry ;
        fact[i]=temp%10;
        carry=temp/10;
    }
    while(carry)
    {
        fact[fsize]=carry%10;
        carry=carry/10;
        fsize++;
    }
    return fsize;
}
void factorial(int n)
{
    int fact[3000],i,fsize;
    fact[0]=1;
    fsize=1;
    int digit[10];
    memset(digit,0,10*sizeof(digit[0]));
    for(i=2;i<=n;i++)
        fsize=multiply(fact,fsize,i);

    for(i=fsize-1;i>=0;i--)
    digit[fact[i]]++;
    cout << n << "! --" << endl;
    for(i=0;i<10;i++)
    {
        if(i==5) cout << endl;
        cout << fixed << setw(5) << "(" << i << ")" << setw(5) << digit[i];
    }
    cout << endl;
}
int main()
{
    int n;
    while(scin(n)!=0)
    {
       factorial(n);
    }


    return 0;
}





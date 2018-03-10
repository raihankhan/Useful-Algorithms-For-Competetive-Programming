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
#define vecp            vector< pair<int,int> >
#define pb              push_back
using namespace std;


int findmsb(int n)
{
    int position=0;

    while(n!=0)
    {
        position++;
        n=n>>1 ;
    }

    return position;
}

int PersonToLive(int n)
{
    int length = findmsb(n);

    int xor_oparand = 1 << (length-1);

    n = n ^ xor_oparand;

    n = n << 1;

    n = n|1;

    return n;
}

int main()
{

    int NumberOfSoldiers;

    cin >> NumberOfSoldiers;

    cout << PersonToLive(NumberOfSoldiers) << endl;

    return 0;
}

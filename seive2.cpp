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
vector<lli > vec;
void seive(lli n)
{
    vec.pb(2);
    lli i,j,cnt;
    for(i=3;i<=n;i+=2)
    {
        cnt=0;

        for(j=0;vec[j]<=sqrt(i);j++)
        {
            if(i%vec[j]==0) { cnt=1; break;}
        }

        if(cnt==0) vec.pb(i);
    }

}
int main()
{
    lli n;
    cin >> n ;
    seive(n);
    for(int i=0;i<vec.size();i++)
        cout << vec[i] << endl;


    return 0;
}

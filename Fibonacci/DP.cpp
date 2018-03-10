#include<bits/stdc++.h>
#define lli long long int
#define veci vector<int>
#define vecl vector<long long int>
#define pb push_back

using namespace std;
inline lli fib(lli n)
{
    lli i;
    vecl v;
    v.pb(0);
    v.pb(1);
    for(i=2;i<=n;i++)
        v.pb(v[i-1]+v[i-2]);
    return v[n];
}
int main()
{
    lli a;
    cin >> a ;
    cout << fib(a) << endl;
    return 0;
}


#include<bits/stdc++.h>
#define lli long long int
using namespace std;
inline lli fib(lli n)
{
    if(n<=1)
        return n;
    else return fib(n-1)+fib(n-2);
}
int main()
{
    lli a;
    cin >> a ;
    cout << fib(a) << endl;
    return 0;
}

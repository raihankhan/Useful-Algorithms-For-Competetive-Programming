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




/* Your
    Code
     Starts
      Here
*/


using namespace std;

void Parseparenthesis(string input)
{
    stack<int> s;
    char a, b, c;
    int line=0;

    for (int i=0; i<input.length(); i++)
    {
        if(input[i]=='\n') line++;
        if ( input[i]=='{')
        {
            s.push( line );
        }
        else
        {
            if(input[i]== '}' )
            {
                if (s.empty())
                    cout << "Closing brace not matched in line " << line << endl;
                else
                    s.pop();

            }
        }
    }

    if (!s.empty())
    { while(!s.empty())
        {
            cout << "Opening Brace not matched in line " << s.top() << endl;
            s.pop();
        }
    }
}

int main()
{

    string input;
    string line;
    cout << "Enter the input line" << endl;

    while(getline(cin,line))
    {
        if(line=="^Z")
            break;
        input += "\n" + line;
    }


    Parseparenthesis(input);

    return 0;
}




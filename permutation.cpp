#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[11];
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s",a);
        int len = strlen(a);
        sort(a,a+len);
        do
        {
            printf("%s\n",a);
        }while(next_permutation(a,a+len));
        printf("\n");
    }
    return 0;
}

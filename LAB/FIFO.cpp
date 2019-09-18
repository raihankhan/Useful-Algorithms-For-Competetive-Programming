#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n,a[50],frame[10],no,k,hit,fault=0;
    printf("Enter the number of pages :\n");
    scanf("%d",&n);

    printf("Enter the reference string :\n");
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);

    printf("Enter the number of frames :");
    scanf("%d",&no);

    for(i=0; i<no; i++)
        frame[i]= -1;

    j=0;
    printf("Reference string\t page frames\n");
    for(i=1; i<=n; i++)
    {
        printf("\t%d\t|\t",a[i]);
        hit=0;
        for(k=0; k<no; k++)
            if(frame[k]==a[i])
                hit=1;

        if (!hit)
        {
            frame[j]=a[i];
            j=(j+1)%no;
            fault++;
            for(k=0; k<no; k++)
                printf("%d\t",frame[k]);
        }
        printf("\n");
    }
    printf("Page Fault Is %d",fault);

    return 0;
}


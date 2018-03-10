#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    printf("enter the elements of the matrice\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
            printf("the entered matrice is\n");
             for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
            printf("\n");
     }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            b[i][j]=a[j][i];
    printf("the transpose of the following matrice is\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
            printf("%d\t",b[i][j]);
            printf("\n");
     }
     return 0;
}

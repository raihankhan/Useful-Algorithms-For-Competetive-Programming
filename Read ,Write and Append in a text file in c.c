#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Enter 1,2,3,4 for the corresponding command:\n");
    printf("1. WRITE\n2. READ\n3. Append\n4. Exit\n");

    int command;
    char name[20];
    char ID[20];
    char Department[20];
    char CGPA[20];

    while(1)
    {
        scanf("%d",&command);

        if(command==1)
        {
            FILE *f;
            f= fopen("textfile.txt","w");
            printf("Enter your name: ");
            scanf("%s",name);
            fputs(name,f);
            fputs(" ",f);

            printf("Enter your ID: ");
            scanf("%s",ID);
            fputs(ID,f);
            fputs(" ",f);

            printf("Enter your Department: ");
            scanf("%s",Department);
            fputs(Department,f);
            fputs(" ",f);

            printf("Enter your CGPA: ");
            scanf("%s",CGPA);
            fputs(CGPA,f);
            fputs("\n",f);

            fclose(f);
        }
        else if(command==2)
        {
            FILE *f;
            f= fopen("textfile.txt","r");
            if(f==NULL)
            {
                printf("File Not Exist\n");
                continue;
            }

            char ch=fgetc(f);

            while(ch!=EOF)
            {
                printf("%c",ch);
                ch=fgetc(f);
            }
        }
        else if(command==3)
        {
            FILE *f;
            f= fopen("textfile.txt","a");
            if(f==NULL)
            {
                printf("File Not Exist\n");
                continue;
            }
            printf("Enter your name: ");
            scanf("%s",name);
            fputs(name,f);
            fputs(" ",f);

            printf("Enter your ID: ");
            scanf("%s",ID);
            fputs(ID,f);
            fputs(" ",f);

            printf("Enter your Department: ");
            scanf("%s",Department);
            fputs(Department,f);
            fputs(" ",f);

            printf("Enter your CGPA: ");
            scanf("%s",CGPA);
            fputs(CGPA,f);
            fputs("\n",f);

            fclose(f);
        }
        else if(command==4)
        {
            exit(0);
        }
        else
        {
            printf("Invalid Input. Enter again.\n");
        }
    }

    return 0;
}

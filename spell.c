#include<stdio.h>
int main()
 {
    int num;
    scanf("%d",&num);
    char digit [21][10] = { "", "one", "two", "three", "four", "five", "six", "seven",
                      "eight", "nine", "ten", "eleven", "twelve", "thirteen",
                      "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
                      "nineteen"};
    char tens [11][10] = { "", "", "twenty", "thirty", "forty", "fifty", "sixty",
                     "seventy", "eighty", "ninety"};
    char str[1000] = {0};
    int prev=0, div=1000;
    strcpy(str, "");

    while(div) {

    if ((num / div) % 10 > 0 || (div == 10 && (num%100) > 0)) {

        if (prev) {
            strcat(str, " and");
            prev = 0;
        }

        switch(div) {
            case 1000:
                if (strlen(str) > 0 && str[strlen(str) - 1] != ' ')
                    strcat(str, " ");
                strcat(str, digit[(num / div) % 10]);

                if (((num / div) % 10) > 1)
                    strcat(str, " thousands");
                else
                    strcat(str, " thousand");
                prev = 1;
                break;
            case 100:
                if (strlen(str) > 0 && str[strlen(str) - 1] != ' ')
                    strcat(str, " ");

                strcat(str, digit[(num / div) % 10]);

                if (((num / div) % 10) > 1)
                    strcat(str, " hundreds");
                else
                    strcat(str, " hundred");

                prev = 1;
                break;
            case 10:
                if ( (num%100) >= 10 && (num%100) <= 19)
                {
                    if (strlen(str) > 0 && str[strlen(str) - 1] != ' ')
                        strcat(str, " ");

                    strcat(str, digit[num%100]);
                }
                else {
                    if (strlen(str) > 0 && str[strlen(str) - 1] != ' ')
                        strcat(str, " ");
                    strcat(str, tens[(num%100)/10]);

                    if (strlen(str) > 0 && str[strlen(str) - 1] != ' ')
                        strcat(str, " ");

                    strcat(str, digit[num%10]);
                }
                break;
            }
        }

        div /= 10;
    }
    printf("%d %s\n", num, str);

}

#include<stdio.h>
int main()
    {
        int ara[10],i,j;
        char b[15];
        for(i=0;i<10;i++)
        {
            ara[i]=0;
        }
        for(i=9;i>=0;i--)
        {
            for(j=0;j<i;j++)
            {
               b[j]=' ';
            }
            for(j=0;j<i;j++)
            {
                printf("%c",b[j]);
            }
            printf("1\n");
        }
    }

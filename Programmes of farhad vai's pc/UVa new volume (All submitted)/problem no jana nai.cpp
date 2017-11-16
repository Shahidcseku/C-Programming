#include<stdio.h>
#include<string.h>
int main()

{
    int i,j,a=0;
    char c[100];

    while(gets(c))
    {
        j=strlen(c);

        for (i=0;i<j;i++)
        {
            a++;
           if(a%2!=0)
           {
               if(c[i]=='1')
               {
                   c[i]='2';
               }
           }
        }
        puts(c);
    }
}

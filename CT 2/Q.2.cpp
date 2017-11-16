#include<stdio.h>
#include<string.h>
void replace(char str[],char old,char n);
int main()
{
    char str[]={"ABACADAE"};
    char old='A',n='Z';
    replace(str,old,n);
}

void replace(char str[],char old,char n)
{
    int i;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]==old)
        {
            printf("%c",n);
        }
        else
        {
            printf("%c",str[i]);
        }
    }
}

#include<stdio.h>
int main()
{
    char str[1000],ch[1000];
    int i;

    puts("Enter a number as a string :\n\n\n");
   scanf("%s",&str);
    for(i=0; ;i++)
    {
        ch[i]=str[i]-48;

        if(i==NULL)
        {
            break;
        }
    }
    for(i=0; ;i++)
    {
        printf("%d",ch[i]);
        if(i=='\0')
        {
            break;
        }
    }
}

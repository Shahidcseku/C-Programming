#include<stdio.h>
int main()

{
    int i;
    char str[1000];
    gets(str);


    for(i=0; ;i++)
    {
        if(i=='a' || i=='e'||i=='i'|| i=='o'||i=='u')
        {
            str[i]=0;
        }
        if(i==NULL)
        {
            break;
        }
    }
    for(i=0; ;i++)
    {
        printf("%c",str[i]);

        if(i==NULL)
        {
            break;
        }
    }


}

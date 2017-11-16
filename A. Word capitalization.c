/// CODE FORCESS
#include<stdio.h>
int main()
{
    char ch[103];
    while(1)
    {
        gets(ch);
        ch[0]=ch[0]-32;
        puts(ch);
    }
}

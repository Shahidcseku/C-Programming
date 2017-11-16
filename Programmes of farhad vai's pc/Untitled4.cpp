#include<stdio.h>
int main()
{
    x:
    char ch;

    scanf("%c",&ch);
    printf("%c\n",ch+1);
    goto x;
}

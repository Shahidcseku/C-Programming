#include<stdio.h>

int main()
{
    int i,fact=1;
    printf("Enter a number:");
    scanf("%d",&i);
    for (;i>=1;i--)
    {
         fact=fact*i;
    }
    printf("%d",fact);
}

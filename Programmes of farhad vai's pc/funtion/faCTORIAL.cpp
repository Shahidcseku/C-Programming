#include<stdio.h>
int fact(int a);
int main()

{
    int n;
    while(1)
    {
    printf("Enter a number.\n");
    scanf("%d",&n);
    int f=fact(n);
    printf("%d\n",f);
    }
}
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }

    return fact;
}

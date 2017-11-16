#include<stdio.h>
int  fib(int n);

int main()
{
    int i;
    int a;
    printf("Enter a number you want to see fibonacci series from:\n ");
    scanf("%d",&i);
    a=fib(i);
    printf("%d ",a);

}
int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }

    return fib(n-1)+fib(n-2);

}

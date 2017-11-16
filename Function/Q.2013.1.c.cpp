#include<stdio.h>
int fun();
void p(int x);
int main()
{
    int a,b,c,d;
    a=fun();
    b=fun();
    c=fun();
    d=fun();
    p(a);
    p(b);
    p(c);
    p(d);
}
int fun()
{
    int i;
    scanf("%d",&i);
    return i;
}

void p(int x)
{
    printf("%d ",x);
}

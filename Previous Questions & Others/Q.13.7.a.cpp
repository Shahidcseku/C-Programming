#include<stdio.h>
int main()

{
    int a,b,c,x[]={10,20,30,40};
    int *p;
    p=x;
    a=*p++;
    b=*++p;
    c=++*p;
    printf("%d %d %d ",a,b,c);

}

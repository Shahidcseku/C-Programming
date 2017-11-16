#include<stdio.h>
int larg(int n,char a[])
{
    int value=a[0];
    for(int i=0;i<n;i++)
    {
        if(value<a[i])
        {
            value=a[i];
        }
    }
    return value;
}
int main()
{
    int n=10;
    char a[]={1,2,3,4,5,6,7,8,9,10};
int     max=larg(n,a);
    printf("%d",max);
}

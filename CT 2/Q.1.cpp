#include<stdio.h>
int fac(int a);
int nCr(int n,int r);
int nPr(int n,int r);
int main()

{
    int n,r;
    printf("Enter the value of n and r respectively:\n");
    scanf("%d%d",&n,&r);
    printf("Value of nCr is %d\n\n",nCr(n,r));
    printf("Value of nPr is %d\n\n",nPr(n,r));

}

int nCr(int n,int r)
{
    return fac(n)/(fac(r)*fac(n-r));
}
int nPr(int n,int r)
{
    return fac(n)/fac(n-r);
}
int fac(int a)
{
    int i,fac=1;
    for(i=a;i>0;i--)
    {
        fac=fac*i;
    }
    return fac;
}

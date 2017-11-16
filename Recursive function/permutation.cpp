#include<stdio.h>

int fac(int a);
int nPr(int n,int r);
int main()
{
    int n,r;
    printf("Enter the value of  n andr respectvly:\n\n");
    scanf("%d%d",&n,&r);


        int res=nPr(n,r);
        printf("%d\n",res);

}
int nPr(int n,int r)
{
    return(fac(n)/fac(n-r));
}
int fac(int a)
{
    if(a==1)
        return 1;
    return (fac(a-1));
}

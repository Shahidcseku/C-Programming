#include<stdio.h>
int main()

{
        int n,r,a, i,j,k;
        int rn=1,rr=1,ra=1;
        scanf("%d%d",&n,&r);

        a=n-r;
        for(i=1;i<=n;i++)
        {
                rn*=i;
        }

        for(j=1;j<=r;j++)
        {
                rr*=j;
        }

        for(k=1;k<=a;k++)
        {
                ra*=k;
        }

        printf("%d\n",rn/(ra*rr));


}

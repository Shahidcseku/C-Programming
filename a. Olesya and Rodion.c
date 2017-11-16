#include<stdio.h>
int main()
{
    int n,t;
    long long int nNew,i;

    while(scanf("%d%d",&n,&t)==2 && (n>0 && n<101) && (t>1 && t<11))
    {
        nNew=1;
        for(i=1;i<n;i++)
        {
            nNew=nNew*10;
        }

        for(i=nNew;i<nNew*10;i++)
        {
            if((int)i%t==0)
            {
                printf("%lld\n",i);
                break;
            }
        }
        if(i==nNew*10)
        {
            printf("-1\n");
        }
    }
}

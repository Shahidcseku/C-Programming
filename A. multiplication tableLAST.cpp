#include<stdio.h>
int main()
{
    long long n,x;
    while(scanf("%lld%lld",&n,&x)==2)
    {
        int i,count=0;
        for(i=1;i<=n;i++)
        {
            if(x%i==0)
            {
                if((x/i)<=n)
                {
                    count++;
                }
            }
        }

        printf("%d\n",count);
    }
}

///Count the factors
///10699
long long prime(long long a[]);
#include<stdio.h>
int main()

{
    long long  c,t,i,j,k=0,n,a[1000];

    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);

        for(j=2;j<n/2+1;j++)
        {
            if(n%j==0)
            {
                 a[k]=j;
                 k++;

            }
         prime(a);
        }
    }
}

long long prime(long long a[])
{
    long long i,j,p=1,pr;
    for(i=0; ;i++)
    { if(a[i]==NULL)
        {
            break;
        }
        pr=a[i];

        for(j=2;j<pr;j++)
        {
            if(pr%j==0)
            {
                p=0;
                break;
            }
        }
        if(pr==1)
        {
            printf("%lld",pr);
        }
    }
}



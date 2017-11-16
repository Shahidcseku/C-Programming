/// Finding prime numbers by using sieve's algorithm

#include<stdio.h>
int main()

{
   long long int number[100000],prime[100000],i,j,n,x=0;

   scanf("%lld",&n);
    for (i=0;i<n;i++)
    {
        number[i]=i+2;
    }
    for(i=0;i<n;i++)
    {
        if(number[i]!=-1)
        {
            for(j=2*number[i]-2;j<n;j+=number[i])
            {
                number[j]=-1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(number[i]!=-1)
        {
            x++;
           prime[x]=number[i];
        }

    }
    for(i=1;i<=x;i++)
    {
        printf("%d ",prime[i]);
    }
}


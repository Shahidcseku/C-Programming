/// Finding prime numbers by using sieve's algorithm

#include<stdio.h>
int main()

{
   long long int number[100000],i,j,n;

   scanf("%lld",&n);
    for (i=0;i<n;i++)
    {
        number[i]=i+2;

    }
    for(i=0;i<n;i++)
    {      ///  printf("i=%d\n",number[i]);
        if(number[i]!=-1)
        {

            for(j=2*number[i]-2;j<n;j+=number[i])
            {
               ///printf("j=%d\n",number[j]);
                number[j]=-1;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        if(number[i]==-1)
        {
            continue;
        }
        else
        {
            printf("%lld ",number[i]);
        }
    }
}

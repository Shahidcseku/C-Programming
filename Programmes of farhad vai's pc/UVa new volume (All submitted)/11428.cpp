// 11428
// Cubes

#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,x,y;
    int i,j,c;

    while(scanf("%lld",&n)==1)
    {
        c=0;
        if(n==0)
        {
            break;
        }
        else
        {
            for (i=22;i>=1;i--)
        {
            for(j=1;j<=22;j++)
            {
               x=pow(i,3);
               y=pow(j,3);
               if(n==(x-y))
               {
                   printf("%lld %lld\n",i,j);
                   c=1;
                   break;

               }

            }
        }
        if(c==0)
        {
            printf("No solution\n");
        }
        }
    }
}

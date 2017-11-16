#include<stdio.h>
int main()
{

   long long int dim,src,i,j;
   int  num[100][100];
    int count;
    while(scanf("%lld%lld",&dim,&src)==2)
    {
        count=0;

        for(i=1;i<=dim;i++)
        {
            for(j=1;j<=dim;j++)
            {
                num[i-1][j-1]=i*j;
            }
        }


        for(i=1;i<=dim;i++)
        {
            for(j=1;j<=dim;j++)
            {
                if(num[i-1][j-1]==src)
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);



    }
}

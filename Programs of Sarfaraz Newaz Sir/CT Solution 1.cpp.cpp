//Series Summation//
#include<stdio.h>
int main()
{
    int i,j,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            sum+=j;
        }

    }
    printf("%d",sum);
}

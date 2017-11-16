#include<stdio.h>
int main()
{
    int n,i,j,x,factor,counter;
    scanf("%d",&n);

    for (i=n/2+1;i>=2;i--)
    {
        if(n%i==0)
        {
            x=i;
        }
        for (j=2;j<x;j++)
            {
                if(x%j==0)
                {
                    break;
                }
                else
                {
                    counter=1;
                }
            }
        if(counter==1)
        {
            printf("%d",x);
            break;
        }
    }
}

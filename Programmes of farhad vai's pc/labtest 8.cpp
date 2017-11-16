#include<stdio.h>
int main()
{
    int i,j,k,count=0,res=1,res1=0,rem=0,n,n1,n2;
    scanf("%d",&n);


    n1=n;
    n2=n;


    for (i=1; ; i++)
    {
        n=n/10;
        count++;
        if(n==0)
        {
            break;
        }
    }

    for (j=1; ;j++)
    {
        rem=n1%10;
        n1=n1/10;

        if(n1==0)
        {
            break;
        }
        for (k=1;k<=count;k++)
        {
            res=res*rem;
            ///res1=res1+res;

        }
        printf("%d\n",res);

    }

}

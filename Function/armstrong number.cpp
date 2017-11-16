#include<stdio.h>
void armstrong(int n);
int main()

{
    int n;
    while(scanf("%d",&n)==1)

    {
        if(n<0)
        {
            break;
        }
        armstrong(n);
    }
}

void armstrong(int n)
{
    int l=0,i,j,rem,res=0,term,n1=n,n2=n;
    for(i=1; ;i++)
    {
        n=n/10;
        l=i;
        if(n==0)
            break;

    }
    for(i=1;i<=l;i++)

    {
        term=1;
        rem=n1%10;
        for(j=1;j<=i;j++)
        {
            term=term*rem;
        }
        res=res+term;
        n1=n1/10;
    }
    if(res==n2)
    {
        printf("Armstrong number.\n");
    }
    else
    {
        printf("Not Armstrong number.\n");
    }

}

#include<stdio.h>
int main()
{
    int i,j,n;

    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
    {
        for(j=n-i;j>=0;j--)
        {
            printf(" ");
        }

        for(j=1;j<=i;j++)
        {
            if(j%2==0)
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }

}




// PATTERN 2
#include<stdio.h>
int main()

{
    int n,i,j,k;
    while(scanf("%d",&n)==1)

    for (i=1;i<=n;i++)

    {
        for (j=i;j>0;j--)
        {
            printf(" ");
        }

        for (k=2*n-2*i;k>=0;k--)
        {
            printf("*");
        }

        printf("\n");
    }
}


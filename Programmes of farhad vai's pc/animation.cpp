#include<stdio.h>
int main()

{
    int m,n,i,j,k,l,o,p;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=n-i;j>0;j--)
        {
            printf(" ");
        }
        printf("*");

        for (k=2;k<=2*i;k++)
        {
            printf(" ");
        }
        printf("*");


        printf("\n");
    }

    for (m=1;m<=n;m++)
    {
        for (l=1;l<=m;l++)
        {
            printf(" ");
        }
        printf("*");

        for (o=2*n-2*m;o>0;o--)
         {
             printf(" ");
         }
         printf("*");

        printf("\n");

    }


}


//PATTERN 1



#include<stdio.h>
int main()

{
    int i,j,k,m,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n-i;j>0;j--)
        {
            printf(" ");

        }
        for (m=1;m<=2*i-1;m++)
        {
            printf("*");
        }

        printf("\n");
    }
}

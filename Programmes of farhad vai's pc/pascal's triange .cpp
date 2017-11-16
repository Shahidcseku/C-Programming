/// Pascal's Triangle

#include<stdio.h>
int fact(int x);
int main()
{
    int i,j,n;
    printf("Enter the line number \n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(int k=0;k<=(n-i);k++)
        {
            printf(" ");
        }

        printf("1 ");
        for(j=1;j<=i;j++)
        {
            printf("%d ",fact(i)/(fact(i-j)*fact(j)));
        }
        printf("\n");
    }

}
int fact(int x)
{

    int fact=1;
    for(int i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    return fact;
}

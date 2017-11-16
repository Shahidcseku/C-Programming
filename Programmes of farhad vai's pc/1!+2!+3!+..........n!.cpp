#include<stdio.h>
int main()
{
    int i,j,num,fact,res=0;
    printf("Enter the value of n:\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        fact=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;

        }
         res=res+fact;
    }
    printf("%d",res);
}

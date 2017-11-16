#include<stdio.h>

int main()
{
    int i,j;
    int a1[11],a2[11];
    int r[11],res[11],temp=0;

    printf("Enter 1st number  : \n");
    for(i=2;i<=5;i++)
    {
        scanf("%d",&a2[i]);

    }
    printf("Enter 2nd number  : \n");

    for(j=2;j<=5;j++)
    {
        scanf("%d",&a2[j]);

    }

    j=5;
    for(i=5;i>=2 && j>=2;i--)
    {
        j--;
        temp=temp+a1[i]+a2[j];
        res[i]=temp%10;
        temp=temp/10;


    }
    for(i=1;i<=5;i++)
    printf(" %d",res[i]);

}

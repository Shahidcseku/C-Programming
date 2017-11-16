
#include<stdio.h>
int main()
{
    int i,total=0,a=1,temp=1,n,sum=0;
    int  arr[100];
    printf("Enter a number :\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        a=temp;
        temp=total;
        total=total+a;
        arr[i]=total;
        sum=sum+total;

        printf("%d ",total);
    }
    printf("\nReverse of the series:\n");
    for(i=i-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\nSummation of the series : %d\n",sum);
}

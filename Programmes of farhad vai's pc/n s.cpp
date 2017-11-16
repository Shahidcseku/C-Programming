#include<stdio.h>
int main()
{
    int sum,i,n;
    sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){ if((i%2)==0)
        continue;
    }
    sum=sum+i;
        printf("%d",sum);
}

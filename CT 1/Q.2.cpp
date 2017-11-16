#include<stdio.h>
int main()

{
    int n,i,temp=1,total=0,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        temp=x;
        x=total;
        total=total+temp;
        printf("%d  ",total);

    }

}

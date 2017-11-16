// Fibonacci series


#include<stdio.h>
int main()

{
    int n,i,temp=1,x=1,total=0;
    scanf("%d",&n);
    printf("1 ");
    for (i=1;i<=n;i++)
    {

        total=total+temp;
        printf("%d ",total);
        temp=x;
        x=total;


           /*  temp=x;          same work
             x=total;
             total=total+temp;
             printf("%d ",total);*/

    }
}

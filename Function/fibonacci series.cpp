#include<stdio.h>
void fib(int a);
int main()

{
    int n;
    printf("Enter the number of fib number u  want to see:\n\n\n");
    while(scanf("%d",&n)==1)
    {
        if(n<0)
        {
            break;
        }
        fib(n);
    }


}
void fib(int a)

{
    int temp=1,num=0,i,x=1;
    for(i=1;i<=a;i++)
    {
        temp=x;
        x=num;
        num=num+temp;
        printf("%d ",num);
    }
}

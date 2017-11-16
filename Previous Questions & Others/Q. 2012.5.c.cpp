#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;      /// Swaping without any intermediat variable
    a=a-b;
    printf("%d %d ",a,b);
}

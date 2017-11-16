#include<stdio.h>;
void bin(int a);
int main()

{
    printf("Enter a decimal number:\n");
    while(1)
    {

    int a;
    scanf("%d",&a);
    bin(a);
    printf("\n");
    }

}
void bin(int a)
{
    if(a==0)
    return ;
    bin(a/2);
    printf("%d",a%2);

}

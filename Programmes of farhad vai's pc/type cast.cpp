#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    printf("Enter a number:");
    scanf("%d",&i);
    float f;
    f=sqrt(i);
    printf("The integer part is %d\n",(int) f);
    printf("The decimal part is %f",f-(int) f);
}

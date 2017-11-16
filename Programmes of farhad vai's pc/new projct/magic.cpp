#include<stdio.h>
int main ()
{
    int i,sum,b;
    printf("Enter last 2 digit of your mobile no:\n");
    scanf("%d",&i);
    printf("Enter your birth year:\n");
    scanf("%d",&b);
     sum=((i*2+5)*50+1765);
    sum=sum-b;
    printf("Currenty you r  %d years.\n",sum);
    printf("\nNote: Last 2 digit is ur age & 1st 2 digit is your mobile no.");


}

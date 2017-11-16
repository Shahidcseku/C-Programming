#include<stdio.h>

int main()

{
    int i;
    printf("Enter a year:\n");
    scanf("%d",&i);

    if((i%4==0) && (i%100!=0 || i%400==0))
    {

        printf("%d is a leap year.",i);
    }
    else
    {

        printf("%d is not a leap year.",i);
    }

}

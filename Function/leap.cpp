#include<stdio.h>
void leap(int a);
int main()
{
    int y;
    printf("Enter a year:\n");
    scanf("%d",&y);
    leap(y);
}
void leap(int a)

{
    if(a%4==0 && (a%400==0 || a%100!=0))
    {
        printf("Leap year.\n");
    }
    else
    {
        printf("Not leap year.\n");
    }
}

#include<stdio.h>
int main()
{
    suru:
    int i;
    scanf("%d",&i);
    if(i>=2000)
    {
        if(i%4==0 && i%100!=0 || i%400==0)
        {
            printf("This is a leap year.\n");
        }
        if(i%15==0)
        {
            printf("This is a hulukulu festival year.\n");
        }
        if(i%55==0)
        {
            printf("This is a bulukulu festival year.\n");
        }
        if(i%4!=0 && i%15!=0 && i%55!=0)
        {
            printf("This is  a ordinary year.\n");
        }
    }
    goto suru;
}

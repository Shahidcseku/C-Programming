#include<stdio.h>
int main()
{
    int i;
    printf("Enter your number(0001-9999");
    scanf("%d",&i);


    if(i==1120){ printf("congratulation. TV");}
   else if(i==5432){printf("Congratlation. Mobile ");}
   else if(i==9800){ printf("congratuation. Fan");}
    else{
        printf("You r unlucky.");
    }
}

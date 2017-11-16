#include<stdio.h>

int main(void)
{
    int choice,c,k;
    float i,j;
    printf(" Enter your choice:\n1.Celcious to Kelvin\n2.Kelvin to Celcious");
    scanf("%d",&choice);
    if(choice==1) { printf("Enter the value in celcious:");
    scanf("%d",&c);
    i=c+273.16;
    printf("\nIn kevin:%f",i);
      }
else { printf("Enter the value in kelvin:");
scanf("%d",&k);
j=k-273.16;
printf("In celcious: %f",j);
  }
}

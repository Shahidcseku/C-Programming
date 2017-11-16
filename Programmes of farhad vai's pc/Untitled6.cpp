#include<stdio.h>
#include<math.h>
int main()
{
 int i;
    printf("Enter a number:");
    scanf("%d",&i);
   int f;
    f=sqrt(i);
 if(f-(int) f>=.5)
   {
printf("Result is %d",(int) f + 1);
   }
 else
 {
     printf("Result is %d",f);
 }
}


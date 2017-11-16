//gcd
#include<stdio.h>
int main()
{
  int x,num1,num2,gcd;
  printf("Enter 2 number");
  scanf("%d %d",&num1,&num2);
  if(num1>num2) {x=num2;}
  else {x=num1;}

  for(;x>=1;x--) {
  if((num1%x)==0 && (num2%x==0))

    {gcd=x; break;}
  }  printf("%d",gcd);
}

/*  Programme's name : Detarmination of e^x
    Author : Shahidul Islam
    Creation date : 26 april 2015
*/

#include<stdio.h>

int main()
{
    float x,i,j,res,fact,pow;
   while(1)
   {
       printf("e^");
    scanf("%f",&x);
    for (i=1;i<=15;i++)
    {
        res=1.0,fact=1.0,pow=1.0;
        for(j=1;j<=i;j++)
        {
            pow=pow*x;

            fact=fact*j;
            res=res+(pow/fact);
        }
    }
    printf("%f\n",res);
   }
}

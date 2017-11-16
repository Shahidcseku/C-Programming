///The only one difference between sin(x) and cos(x) is limit of i is from 1 for sine and 0 for cosec

#include<stdio.h>
int main()

{
    int i,j,a;
    double x,d,sign=1,res=0,pow,fact;

    scanf("%lf",&d);

    a=d/360;
    d=d-a*360;
    x=d*(3.1416/180);

    for(i=0;i<=25;i+=2)
    {
        fact=1;
        pow=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
            pow=pow*x;
        }
        res=res+(pow/fact)*sign;
        sign=sign*-1;
    }
   printf("%.2lf\n",res);
}


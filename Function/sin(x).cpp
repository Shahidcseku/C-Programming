///  (x^1)/1!-(x^3)/3!+..............

#include<stdio.h>
#define pi 3.1416
float sinx(float x);
int main()

{
    float x,d,res=0,pow,fac;
    int a,sign=1,i,j;
    printf("Enter a degree in radian:\n");
    scanf("%f",&x);

    a=x/360;
    x=x-a*360;
    d=pi*x/180;

    for(i=1;i<=25;i=i+2)
    {
        pow=1;
        fac=1;
        for(j=1;j<=i;j++)
        {
            fac=fac*j;
            pow=pow*d;
        }
        res=res+(pow/fac)*sign;
        sign=sign*-1;

    }
    printf("%.2f",res);
}

/// tan(x)
#include<stdio.h>
int main()
{
    int i,j,a;
    double x,d,sign1=1,sign2=1,sin=0,tan=0,cos=0,pow,fact;

    scanf("%lf",&d);

    a=d/360;
    d=d-a*360;
    x=d*(3.1416/180);

    for(i=1;i<=25;i+=2)
    {
        fact=1;
        pow=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
            pow=pow*x;
        }
        sin=sin+(pow/fact)*sign1;
        sign1=sign1*-1;
    }



    for(i=0;i<=25;i+=2)
    {
        fact=1;
        pow=1;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
            pow=pow*x;
        }
        cos=cos+(pow/fact)*sign2;
        sign2=sign2*-1;
    }


    tan=sin/cos;
    printf("%.2lf\n ",tan);
}

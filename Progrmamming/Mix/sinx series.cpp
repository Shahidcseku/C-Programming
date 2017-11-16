

#include<stdio.h>
#define pi 3.1416
int main()
{
    double d,x;
    printf("enter a angle in degree:");
    scanf("%lf",&d);
    int a=d/360;
    d=d-a*360;
    x=(d*pi)/180.000;
    double res=0.0,pow,fac,prev_term=1000.0;
    for(int i=1; ;i=i+2)
    {

        pow=1;
        fac=1;
        for(int j=1;j<=i;j++)
        {
            pow=pow*x;
            fac=fac*j;
        }
        if(i%4==1)
        {
            res=res+(pow/fac);
        }
        else
        {
            res=res-(pow/fac);
        }
        res=1/res;
        if(prev_term==(pow/fac))
        {
            break;
        }
        prev_term=(pow/fac);
    }

    printf("%lf\n",res);
}

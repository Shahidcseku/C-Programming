#include<stdio.h>
#define pi 3.1416
int main()

{
    int i,j,a,d;
    double x,res=1.00,pow,fact,prev_term=1000.00;

    scanf("%lf",&d);

    a=d/360;
    d=d-a*360;

    x=(d*pi)/180.00;

    for (i=0; ;i=i+2)
    {
        pow=1;
        fact=1;

        for (j=1;j<=i;j++)
        {
            pow=pow*x;
            fact=fact*j;


        }

        if(i%4==1)
        {
            res=res+(pow/fact);
        }
        else
        {
            res=res-(pow/fact);
        }

        res=1/res;







        if(prev_term==(pow/fact))
        {
            break;
        }
        prev_term=(pow/fact);


         printf("%.2lf\n",res);

    }
}

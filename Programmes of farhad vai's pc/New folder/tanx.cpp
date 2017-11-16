#include<stdio.h>

int main()
{
    printf("Enter the angle indegree: ");
    double d,x;
    scanf("%lf",&d);
    int a=d/360;
    d=d-(360*a);
    x=d*3.1416/180.0;
    double res=0,pow,fac,prev_term=10000,ans;
    for(int i=1; ;i=i+2)
    {
        fac=1;
        pow=1;
        for(int j=1;j<=i;j++)
        {
            fac=fac*j;
            pow*=x;
        }

        if(i%4==1)
        {
            res+=(pow/fac);
        }

        else
        {
            res-=(pow/fac);
        }

        if(prev_term==(pow/fac))
        {
            break;
        }
        prev_term=pow/fac;
        }
        ans=res;
        res=0;


    for(int i=0; ;i=i+2)
    {
        fac=1;
        pow=1;

        for(int j=1;j<=i;j++)
        {
            fac=fac*j;
            pow*=x;
        }
        if(i%4==0)
        {
        res+=(pow/fac);
        }
        else
        {
        res-=(pow/fac);
        }
        if(prev_term==(pow/fac))
        {
        break;
        }
        prev_term=pow/fac;
    }
        printf("tan(%.3lf)= %lf\n",d,ans/ res);
}

#include<stdio.h>
int main()

{
    int i,j;
    float x,sign,fact,cosx,pow=1,d;
    printf("Enter the value of x (in degree):");
    scanf("%f",&d);

    int a=d/90;
    d=d-90*a;

    x=(d*3.142)/180.0;
    cosx=1;
    sign=-1;
    for(i=2;i<=50;i=i+2)
    {
        fact=1;
        for (j=1;j<=i;j++)
        {
            fact=fact*j;
            pow=pow*x;
        }
        cosx=cosx+(pow/fact)*sign;
        sign=sign*(-1);
    }
    printf("The value of cosx %f\n",cosx);
}

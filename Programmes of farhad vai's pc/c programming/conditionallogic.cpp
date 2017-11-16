#include<stdio.h>
int main()
    {
        double x,y,a1,b1,c1,a2,b2,c2,d;
        printf("entar a1:\n");
        scanf("%lf",&a1);
        printf("entar b1:\n");
        scanf("%lf",&b1);
        printf("entar c1:\n");
        scanf("%lf",&c1);
        printf("entar a2:\n");
        scanf("%lf",&a2);
        printf("entar b2:\n");
        scanf("%lf",&b2);
        printf("entar c2:\n");
        scanf("%lf",&c2);
        d=(a1*b2-a2*b1);
        x=(a1*c2-a2*c1)/d;
        y=(b2*c1-c2*b1)/d;
        printf("The value of x is:%.2lf\n",x);
        printf("The value of y is:%.2lf\n",y);
    }

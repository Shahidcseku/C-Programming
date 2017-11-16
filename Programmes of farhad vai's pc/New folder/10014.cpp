//10014

#include<stdio.h>
int main()

{
    int i,j,n,t;
    float a0,a2,c,c_sum,result;

    scanf("%d",&t);

    for (i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%f %f",&a0,&a2);

        for (j=1;j<=n;j++)
        {
            scanf("%f",&c);
            c_sum+=c;
        }

        result=((a0+a2)/2)-c_sum;
        printf("%f\n",c_sum); // Printf c_sum ??
    }
}

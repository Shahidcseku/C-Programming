#include<stdio.h>
int main()

{
    int i;
    float b,p,res;
    printf("Enter a number and power :\n");
    scanf("%f%f",&b,&p);

    if(p>=0)
    {
        res=1;
        for(i=1;i<=p;i++)
        {
            res=res*b;
        }

        printf("%.2f",res);
    }
    else
    {
        res=1;
        for(i=0;i>p;i--)
        {
            res=res*b;
        }
        res=1.0/res;
        printf("%.5f",res);
    }
}

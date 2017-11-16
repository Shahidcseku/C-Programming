

///  This programme has a problem with if condition



#include<stdio.h>
int main()

{
    float x,fact,pow,res;
    int i,j,t=0;

    while(1)

    {
        res=1.0;
        scanf("%f",&x);

        for (i=2;i<=50;i=i*2)
        {
            //printf("%d  ",i);

            pow=1.0;
            fact=1.0;
            //res=1.0;

            for (j=1;j<=i;j++)
            {
                fact=fact*j;
                pow=pow*x;
                //printf("\n%f %f",fact,pow);
            }

            if(t==0)
            {
                res=res-(pow/fact);
                t=1;

            }
            else
            {
                res=res+(pow/fact);
                t=0;
            }
        }


        printf("%f\n",res);
    }
}

#include<stdio.h>
int main()
{
        int a,b,t,gcd,y,lcm;
        scanf("%d %d",&a,&b);
        y=a*b;
        if(a==0){
            gcd=a;
        }
        else if(b==0){
            gcd=b;
        }

         else {

           while(b!=0){
                t=b;
               b=a%b;
                a=t;
                  gcd=a;
                    printf("%d %d\n",a,b);
                }
                  }
                  lcm=(y)/gcd;

                   printf("The greate common devisor  is :%d\n",gcd);
                   printf("The large common multiple is :%d\n",lcm);


        return 0;
    }

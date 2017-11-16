#include<stdio.h>
int main()

{
    int i,j,n,n1,n2,pow=1,res=0,rem,counter=0;
    scanf("%d",&n);
    n1=n;
    n2=n;

    for(i=1; ; i++)
    {
        counter++;
        n=n/10;
        if(n==0)
        {
            break;
        }
    }


   for(j=1; ;j++)
   {
        pow=1;
       rem=n1%10;
       n1=n1/10;

       for (int k=counter;k>=1;k--)
       {
           pow=pow*rem;
            //printf("%d\n",pow);
       }
       res=res+pow;


       if(n1==0)
       {
           break;
       }
   }
   if(res==n2)
   {
       printf("Armstrong number.\n");
   }
   else
   {
       printf("Not Armstrong number.\n");
   }
}

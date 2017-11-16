#include<stdio.h>
int main()
   {
         int a,b,lcm,i;
         scanf("%d %d",&a,&b);
         for(i=1;;i++)
         {
				lcm=i*a;
				if(lcm%b==0)
				{
					break;
				}
         }
         printf("%d",lcm);
         return 0;
   }

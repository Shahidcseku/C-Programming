#include<stdio.h>
#define roll 10
#define sub 3
int main()

{
   int i,j,k,a[roll][sub],total[roll]={0};
   printf("Enter the marks of 3 subjects:\n");

   for(i=0;i<roll;i++)
   {
       printf("Roll: %d :",i+1);
       for(j=0;j<sub;j++)
       {
           scanf("%d",&a[i][j]);
       }
   }

   for(i=0;i<roll;i++)
   {
       for(j=0;j<sub;j++)
       {
           printf("\t%d",a[i][j]);
       }
       printf("\n");
   }

   for(i=0;i<roll;i++)
   {
       for(j=0;j<sub;j++)
       {
           total[i]=total[i]+a[i][j];
       }
   }

    for(i=0;i<roll;i++)
   {
      printf("Roll : %d\tTotal:%d\n",i+1,total[i]);

   }

}

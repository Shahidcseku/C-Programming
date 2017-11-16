#include<stdio.h>
int main()
{
        int dec,d;
        printf("Enter a numbre in decimal system:\n");
        scanf("%d",&dec);
       for (d=dec;d>0;d-2)
       {

               if(d%2==0)
               {
                       printf("0");
                }
               else
               {
                       printf("1");

               }
                 d=d-1;
       }

}

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int i,n;

        printf("Guess a number.\n");

        for (i=1;i<=10;i++)
               {

                       scanf("%d",&n);
                       if (n>37)
                       {
                               printf("Guess  smaller one.\n");
                       }
                       else if(n<37)
                       {
                               printf("Guess larger one.\n");
                       }
                       else
                       {
                               printf("Congratulations !!! \nYou have done.");
                               break;
                       }

               }
                printf("\nGame over.");

}

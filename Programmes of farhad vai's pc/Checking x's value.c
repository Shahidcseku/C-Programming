/*2. A programme to test x's value.*/

#include<stdio.h>

int main()

{
    float x;
    printf("Enter x's value:\n");
    scanf("%f",&x);
     float a,b;
     a=(x-5)*(x+2)/(x-2);
     b=(x+10)*(x-7)/(x-10);

     if (a>x && x>b)
     {
         printf("Satisfied.");
     }
     else
     {
         printf("Not satisfied!!!");
     }
}

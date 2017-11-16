#include<stdio.h>
int leap(int a);
int main()

{
    int n;
    printf("Enter a year:\n");
    scanf("d",&n);
   int leap();
}

int leap(int a)
{
    int res;
     if(a%4==0 && (a%100!=0 || a%400==0))
        {
           res=1;
       }
       else
        {
            res=0;
        }
        return res;
}

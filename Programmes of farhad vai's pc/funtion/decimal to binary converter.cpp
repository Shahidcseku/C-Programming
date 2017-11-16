#include<stdio.h>
char bin(char a);
int main()

{
    char n[100];
    printf("Enter a decimal number:\n");
    gets(n);
    printf("%c",bin(n));
}
char bin(char a)
{
    int rem[100],i,j=0;
   for(i=0; ;i++)
   {
       a[j]=a[i]-48;
       j++;
       if(a[i]==NULL)
       {
           break;
       }
   }
   for(i=0; ;i++)
   {
       rem[i]=a[i]%2;
       a[i]=a[i]/2;
       if(a[i]==NULL)
       {
           break;
       }
   }
   return rem;
}

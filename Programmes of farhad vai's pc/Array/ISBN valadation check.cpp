#include<stdio.h>
int main()

{
   for(int in = 1; in <= 10;in++)
   {
        int i,res=0,rem=0;
    char isbn[10];
    printf("Enter a 10 digit ISBN number:\n");
    gets(isbn);

    for(i=0;i<10;i++)
    {
        isbn[i]=isbn[i]-48;
    }
    for(i=0;i<9;i++)
    {
        res=res+isbn[i]*(i+1);
    }
    rem=res%11;

    if(rem==isbn[9])
    {
        printf("Valid\n");
    }
    else
    {
        printf("Not valid\n");
    }
   }
}

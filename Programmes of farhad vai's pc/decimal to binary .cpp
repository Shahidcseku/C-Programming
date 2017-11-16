// Decimal to bianry

#include<stdio.h>
int main()

{

    int dec,bin=0,i,j,k,rem=0,counter=0,binary=0,reminder=0;
    printf("Enter a decimal number:\n");
    scanf("%d",&dec);

    for (i=1; ;i++)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin*10+rem;
        if(bin==0)
        {
            counter++;
        }

        if(dec==0)
        {
            break;
        }
    }
    for(j=1; ; j++)
    {
        binary=binary*10+bin%10;
        bin=bin/10;
        if(bin==0)
        {
            break;
        }

    }

    printf("%d",binary);
    for(k=counter;k>0;k--)
    {
        printf("0");
    }
    printf("\n");
}

#include<stdio.h>
int main()

{
    int i=1;
    while(i<=128)
    {
        printf("%d",i);
        i *= 2;
    }
    printf("\n");
    for(i=1;i<=128;i*=2)
    {
        printf("%d",i);
    }

    printf("\n");
    do
    {
         printf("%d",i);
         i*=2;
    }
    while(i<=128);
}

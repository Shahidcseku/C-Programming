#include<stdio.h>
int main()

{
    int i=1,j=1;
    while(i<11)
    {
         //printf("%d ",i);
        if(++i%2==0)
        {
            printf("%d\n",i);
        }
    }
    printf("\n\n");

     while(j<11)
    {
         //printf("%d ",i);
        if(j++%2==0)
        {
            printf("%d\n",j);
        }
    }
}

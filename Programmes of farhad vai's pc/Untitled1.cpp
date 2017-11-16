#include<stdio.h>
int main()
{
    int i;
    for(i=17;i<101365651;i++)
        if((i%17)==0)
        printf("%d\n",i);
}

#include<stdio.h>
int main()
{
    int i,res=0;
    for(i=100;i<=200;i++)
    {
        if(i%7==0)
        {
            res=res+i;
            printf("%d ",i);
        }
    }
    printf("=%d\n",res);


}

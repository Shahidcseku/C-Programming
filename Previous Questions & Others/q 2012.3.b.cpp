#include<stdio.h>
int main()
{
    int i,p,j,f;
    for(i=2;i<=1000;i++)
    {
        f=1;             /// Most important part of this program
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        if(f!=0)
        {
            printf("%d ",i);
        }
    }
}

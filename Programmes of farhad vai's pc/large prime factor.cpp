#include<stdio.h>
int main()

{
    int i,n,j,prime,media;
    scanf("%d",&n);

    for (j=1;j<n;j++)
    {
        for (i=2;i<j;i++)
    {
        if(j%i==0)
        {
            prime=0;
            break;
        }
        else
        {
            prime=1;
            break;
        }
    }
    if(prime=1)
   {
       media=i;
   }
    }
     if(n%media==0)
        {
            printf("%d ",media);
        }

}

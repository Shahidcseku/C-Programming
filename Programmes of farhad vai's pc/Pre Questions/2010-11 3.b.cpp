#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,res;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        res=1;
        for(j=1;j<=i;j++)
        {
            res=i*j;
               // printf("%d  ",res);

        }
        res+=res;
    }

   printf("\n%d",res);
}

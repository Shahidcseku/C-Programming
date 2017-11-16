
#include<stdio.h>
int main()
{
    int i,j,total=0,grandtotal=0,n;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
       // total=1;
        for(j=1;j<=i;j+=3)
        {

            total=total+j;
           // grandtotal+=total;

        }
        total+=1;
    }
    printf("Total =%d",total);

}

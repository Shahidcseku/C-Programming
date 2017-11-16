#include<stdio.h>
int main()

{
    int i,j,k,n,c,space;
    printf("Enter number of line : \n");

    scanf("%d",&n);

    space=n;
    for(i=0;i<=n;i++)
    {
        c=1;
        for(k=space;k>=0;k--)
        {
            printf(" ");
        }
        space--;
        for(j=0;j<=i;j++)
        {
            printf("%d ",c);
            c=(c*(i-j)/(j+1));
        }

        printf("\n");
    }
}

#include<stdio.h>

int main()

{
    int i,j,k,a,b,a1[10][10],a2[10][10],c[10][10];

    printf("Enter the size of the squre matrix  : \n");
    scanf("%d",&a);

    b=a;

    printf("Enter the elements of 1st matrix : \n\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&a1[i][j]);
        }

    }

     printf("Enter the elements of 2nd matrix : \n\n");
    for(i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&a2[i][j]);
        }

    }


    for(i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            c[i][j]=0;
            for (k=0;k<a;k++)
            {
                c[i][j]=c[i][j]+a1[i][k]*a2[k][j];
            }
        }

    }
     printf("Products of two matrix is : \n");

    for(i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf(" %3d ",c[i][j]);
        }
        printf("\n");

    }
}

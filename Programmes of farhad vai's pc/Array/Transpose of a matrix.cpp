#include<stdio.h>
int main()

{
    int i,j,a,b,m[10][10],t[10][10];
    printf("Enter the size of a matrix(MxN):\n\n\n");
    scanf("%d%d",&a,&b);

    printf("Enter  a %dx%d matrix:\n\n\n",a,b);

    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }

    printf("You have entered :\n\n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the matrix is :\n\n\n");
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            t[j][i]=m[i][j];
        }
    }
     for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("%3d",t[i][j]);
        }
        printf("\n");
    }


}

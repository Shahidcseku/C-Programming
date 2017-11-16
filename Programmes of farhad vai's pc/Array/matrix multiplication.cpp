#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5],s1,s2,s3,s4,i,j,k;
    printf("Enter the size of 1st matrix:(m x n)\n");
    scanf("%d%d",&s1,&s2);
    printf("Enter the size of 2nd matrix:(m x n)\n");
    scanf("%d%d",&s3,&s4);
    if(s2!=s3)
    {
        printf("Invalid size. Can't multiply.\n");

    }
    else
    {
        printf("Enter 1st matrix:\n");
        for(i=0;i<s1;i++)
        {
            for(j=0;j<s2;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter 2nd matrix:\n");
        for(i=0;i<s1;i++)
        {
            for(j=0;j<s2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }


        for(i=0;i<s1;i++)
        {
            for(j=0;j<s2;j++)
            {
                c[i][j]=0;
                for(k=0;k<s1;k++)
                {
                    c[i][j]=c[i][j]+a[i][k]*b[k][j];
                }
            }
        }
        printf("\n\n");
        for(i=0;i<s1;i++)
        {
            for(j=0;j<s2;j++)
            {
                printf(" %d ",c[i][j]);
            }
            printf("\n");
        }
    }

}

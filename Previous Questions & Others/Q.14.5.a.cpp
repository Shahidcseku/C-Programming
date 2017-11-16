#include<stdio.h>
int main()
{
    int mat[10][10],i,j,sum;
    int n,m;
    printf("Enter the size of the matrix: (nxm): ");
    scanf("%d%d",&n,&m);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<m;j++)
        {
            sum+=mat[i][j];
        }
        printf("The sum of column %d:%d\n",i+1,sum);
    }
}

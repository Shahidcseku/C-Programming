#include<stdio.h>

int main()

{
    int i,j,n,m,trace=0,a[10][10];
    printf("Enter size of a matrix(MxN):\n");

    scanf("%d%d",&m,&n);

    printf("Enter a matrix(%dx%d):\n",m,n);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    j=0;
    for(i=0;i<m;i++)
        {
            trace=trace+a[i][j];
            j++;
        }

    printf("\n\nTrace of the matrix is %d \n",trace);
}

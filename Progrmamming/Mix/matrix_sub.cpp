/// Substraction of two matrix

#include<stdio.h>
int main()

{
    int mat[5][4],mat1[5][4],mat2[5][4];
    int i,j;


    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
     for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

     for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            mat2[i][j]=mat[i][j]-mat1[i][j];
        }

    }

    printf("\n\n\n");
     for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("%d ",mat2[i][j]);
        }


        printf("\n");
    }



}


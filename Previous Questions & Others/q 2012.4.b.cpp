#include<stdio.h>
int main()

{
    int i,j,k,n=1;
    char ch[3][3][3];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                ch[i][j][k]=n;
                n++;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",ch[i][j][k]);
            }
            printf("\n");
        }
    }
}

#include<stdio.h>
int main()

{
    int i,j,n;

    int temp[100][100],total[100][100];


    //scanf("%d",&n);
    total[0][0]=0;
    total[1][1]=1;


    for (i=2;i<3;i++)
    {
       for(j=1;j<=i;j++)
       {
            total[i][j]=total[i-1][i-1]+total[i-1][j];
            printf("%d",total[i][j]);

       }



    }
}

/// হয় নাই ।আবার ট্রাই করতে হবে


#include<stdio.h>
int s(int array[10][10],int i,int j,int endi,int endj);
int main()
{
    int x,y,i,j,endi,endj,a[10][10];
    for(x=0;x<10;x++)
    {
        for(y=0;y<10;y++)
        {
            a[x][y]=1;
        }
    }
    printf("%d",s(a,3,3,9,9));

}
int s(int a[10][10],int i,int j,int endi,int endj)
{
    int sum;
    for(i;i<endi;i++)
    {
        for(j;j<endj;j++)
        {
            sum=sum+a[i][j];

            printf("%d    ",sum);
        }
    }

    return sum;
}


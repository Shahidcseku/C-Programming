///10370

/// ভেজাল আছে ।
#include<stdio.h>
int main()
{
    int st,sb,i,j,mark,total=0;
    scanf("%d",&st);
    for(i=1;i<=st;i++)
    {
        scanf("%d",&sb);
        for(j=1;j<=sb;j++)
        {
            scanf("%d",&mark);
            total=total+mark;
        }
        float avg=total/sb;

        printf("%.3f%\n",avg);
    }
}

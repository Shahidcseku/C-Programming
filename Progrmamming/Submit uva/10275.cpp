///10014

#include<stdio.h>
int main()
{
    int t,n;
    float a0,a1,c,res,resc;
    scanf("%d",&t);
    for(int i =1; i<=t;i++)
    {
        scanf("%d %f %f",&n,&a0,&a1);

        for (int j=1;j<=n;j++)
        {
            scanf("%f",&c);
            resc=resc+c;
        }
        res=((a0+a1)/2)-resc;
        printf("%.2f",res);
    }
}

#include<stdio.h>
int main()
{
        int n;
        while (scanf("%d",&n)==1)
        {
                int ct=7,total=7;
                for(int i=2;i<=n;i++)
                {
                        ct=10*ct+7;
                        total=total+ct;
                }
                printf("%d\n",total);
        }
}

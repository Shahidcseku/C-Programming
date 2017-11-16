#include<stdio.h>
int main()
        {
                int n,i;
                while(scanf("%d",&n)==1)
                {
                       int j=1;
                       printf("%d",n);
                        for(i=n;i>=2;i--)
                        {
                                j=j*i;
                                printf("*%d",i-1);
                        }
                        printf("=%d\n",j);
                }
                return 0;
        }

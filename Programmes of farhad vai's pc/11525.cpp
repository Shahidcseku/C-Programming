#include<stdio.h>
int main()
{
     long long  int i,n;
        int t,j;
        scanf("%d",&t);

      for(j=1;j<=t;j++)
      {
              long long int res=0;
                scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
                res=(res+n/i);
        }
        printf("%lld\n",res);
      }
}

#include<stdio.h>
int main()

{
        long long int n;
        int rem,i,div;
       for(i=1;i<9999;i++)
      {
           scanf("%lld",&n);
                if(n==0)
                {
                        break;
                }
                if(n<=9)
                {
                        printf("%lld\n",n);
                }
                while(n>9)
                {
                        rem=n%10;
                        div=n/10;
                        n=rem+div;

                }
                printf("%lld\n",n);
      }

}

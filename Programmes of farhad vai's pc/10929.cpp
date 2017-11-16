#include<stdio.h>
int main()
{
        long long int i;
        while(scanf("%lld",&i)==2)
                if(i==0)
                        {
                                break;
                        }
                         else if(i%11==0)
           {
                    printf("%lld is a multiple of 11.\n",i);

           }
        else
              {
                      printf("%lld is not a multiple of 11.\n",i);
              }
}

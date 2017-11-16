#include<stdio.h>
int main()

{
        long int n;
        int i;
        for(i=0;i<999;i++)
        {
                scanf("%ld",&n);
                if(n==0)
                {
                        break;
                }
                if(n%11==0)
                {
                        printf("%ld is a multiple of 11.\n",n);
                }
                else
                {
                        printf("%ld is not a multiple of 11.\n",n);
                }
        }
}

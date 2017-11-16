///11889
/// Benefit

#include<stdio.h>
int main()

{
    long int i,t,a,c,b;

    scanf("%ld",&t);

    for (i=1;i<=t;i++)
    {
        scanf("%ld %ld",&a,&c);

        if(c%a==0)
        {
             b=c/a;
             printf("%ld\n",b);
        }
        else
        {
            printf("NO SOLUTION\n");
        }

    }
}

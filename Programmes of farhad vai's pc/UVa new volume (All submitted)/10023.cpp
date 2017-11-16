#include<stdio.h>
#include<math.h>
int main()
{
    long long int x,y;
    int i,t;
    scanf("%d",&t);

    for (i=1;i<=t;i++)
    {
        scanf("%lld",&y);
        x=sqrt(y);
        printf("%lld\n",x);

    }

}

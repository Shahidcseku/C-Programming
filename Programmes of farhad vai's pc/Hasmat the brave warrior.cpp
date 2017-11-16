///Uva 10055
#include<stdio.h>
int main()
{
    long long int i,j;
   while (scanf("%lld %lld",&i,&j))

    if (i>j)
    {
        printf("%lld\n",i-j);
    }
    else
    {
        printf("%lld\n",j-i);
    }
}

//11479
//Is this the easiest problem?
#include<stdio.h>
int main()

{
    long long int a,b,c,big,p;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);

        if(a>b && b>c)
        {
            big=a;
            p=b+c;
        }
        else if(b>a && a>c)
        {
            big=b;
            p=a+c;
        }
        else
        {
            big=c;
            p=a+b;
        }

        if(big>p)
        {
            printf("Case %d: Invalid\n",i);
        }
        else
        {
            if(a==b && a==c)
            {
                printf("Case %d: Equilateral\n",i);
            }
            else if(a==b || b==c || a==c)
            {
                printf("Case %d: Isosceles\n",i);
            }
            else
            {
                printf("Case %d: Scalene\n",i);
            }
        }

    }
}

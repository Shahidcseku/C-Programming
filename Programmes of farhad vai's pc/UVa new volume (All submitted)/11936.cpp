///11936
#include<stdio.h>
int main()
{
    int t,i,j,a,b,c,l;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        l=0;
        scanf("%d%d%d",&a,&b,&c);

        if((a>b || a==b) && (a>c || a==c))
        {
            //large=a;
            if(b+c>a)
            {
                printf("OK\n");
            }
            else
            {
                printf("Wrong !!\n");
            }
        }
        else if((b>a || a==b) && (b>c || b==c))
        {
            //large=b;
            if(a+c>b)
            {
                printf("OK\n");
            }
             else
            {
                printf("Wrong !!\n");
            }
        }
        else
        {
            //large=c;
            if(a+b>c)
            {
                 printf("OK\n");
            }
             else
            {
                printf("Wrong !!\n");
            }
        }

    }
}

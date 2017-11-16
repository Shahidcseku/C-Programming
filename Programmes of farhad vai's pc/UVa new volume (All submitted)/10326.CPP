
///THERE HAS SOME BUG
#include<stdio.h>
int main()
{
    int a,i,s,p,t;
    while(1)
    {
        s=0;
        p=1;
        scanf("%d",&t);
        for(i=1;i<=t;i++)
        {
            scanf("%d",&a);
            s=s+a;
            p=p*a;
        }


        if(s>0 || s==0)
        {
            if((p>0 || p==0))
            {
                 printf("x^2-%dx+%d=0",s,p);
            }
            else
            {
                 printf("x^2-%dx-%d=0",s,p);
            }

        }
        else
        {
            if(p>0 || p==0)
            {
                 printf("x^2+%dx+%d=0",s,p);
            }
            else
                {
                    printf("x^2+%dx-%d=0",s,p);
                }
        }


    }
}

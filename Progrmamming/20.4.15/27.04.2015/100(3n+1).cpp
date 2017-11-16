// Problem no : 100
// Title 3n+1

#include<stdio.h>
int main()

{
    int num,frst,scnd,small,large,a,b=0,m;
    while(scanf("%d %d",&frst,&scnd)==2)
    {   m=0;
        if(frst>scnd)
            {
                large=frst;small=scnd;
            }
            else
            {
                large=scnd;small=frst;
            }
            for(a=small;a<=large;a++)
            {
                num=a;b=0;
                while(num!=1)
                {
                    if(num%2==1)
                    {
                        num=3*num+1;
                    }
                    else
                    {
                        num=num/2;
                    }
                    b++;
                    if(b>m)
                    {
                        m=b;
                    }
                }
            }
            printf("%d %d %d\n",frst,scnd,m+1);

    }
    return 0;
}

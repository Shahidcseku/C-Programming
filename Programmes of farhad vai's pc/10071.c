#include<stdio.h>
int main(void)
{

        int v,t;
        shahid:
        scanf("%d %d\n",&v,&t);
        if(-100<=v && v<=100 && 0<=t && t<=200)
        {
            int s;
            s=2*v*t;
            printf("%d\n",s);
              goto shahid;
           }

}

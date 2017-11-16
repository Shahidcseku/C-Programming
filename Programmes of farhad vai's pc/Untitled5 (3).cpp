#include<stdio.h>
int main()
{

        int v,t;
         suru:
        scanf("%d %d",&v,&t);

        if(-100<=v && v<=100 && 0<=t && t<=200)
        {
            printf("%d\n",2*v*t);
            goto suru;
        }
}

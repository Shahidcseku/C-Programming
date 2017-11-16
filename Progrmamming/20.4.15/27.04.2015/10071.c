// Problem no : 10071
//Title : Back to high school physics

#include<stdio.h>
int main()
{

    int v,t;

    while(scanf("%d %d",&v,&t)==2)
    {
        if(-100<=v && v<=100 && 0<=t && t<=200)
        {
            int s;
            s=2*v*t;
            printf("%d\n",s);
        }
    }

}

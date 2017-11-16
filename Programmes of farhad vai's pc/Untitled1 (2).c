#include<stdio.h>
int main()
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int x,y,z;
        if(a>b && a>c){
            x=a;
        }
      if(b>a && b>c){
            x=b;
        }
        if(c>b && c>a){
            x=c;
        }
        if(b<x && b>a || b>c){
            y=b;
        }
       if(a<x && a>b || a>c){
            y=a;
        }
        if(c<x && c>a || c>b){
            y=c;
        }
      if(a<x && a<y){
            z=a;
        }
        if(b<x && b<y){
            z=b;
        }
        if(c<x && c<y){
            z=c;
        }
        printf("%d , %d & %d",z,y,x);
    }

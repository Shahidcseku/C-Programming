// 100
// 3n+1

#include<stdio.h>
#include<stdlib.h>
int main()

{
        int i,j,n,x,m=1;
        while(scanf("%d%d",&i,&j)!=0)

                x=abs(j-i);
                do{
                        if(x%2==1)
                {
                        x=(3*x)+1;
                }
                else
                {
                        x=x/2;
                }
                m++;
                }while(x!=1);


       printf("%d %d %d",i,j,m);
}

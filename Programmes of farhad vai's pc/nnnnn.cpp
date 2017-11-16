#include<stdio.h>
int main()
        {
                int i,j,k,l;
                scanf("%d %d",&i,&j);
                k=j-i;
                int m;

                for(l=1;l>0;l++)
                {
                        m=k;
                        if(k%2==0)
                        {
                                k=k/2;
                        }
                        else if(k%2!=0){
                                k=3*k+1;
                        }
                         if(m==1)
                        {
                                break;
                        }

                }
                printf("%d %d %d",i,j,l);
                return 0;
        }

#include<stdio.h>
int main()
{
        int i,j,k,n,m,s,c=0;
        scanf("%d %d",&i,&j);
        {
                if(i>j)
                {
                        k=i;
                        i=j;
                        j=k;
                }
                for(n=i;n<=j;n++)
                while(m>1)
                {
                        s=1;
                        m=n;
                        if(m%2==0)
                        {
                                m=m/2;
                        }
                        else
                        {
                                m=3*m+1;
                        }
                        s++;
                        if(s>=c)
                                c=s;

                }
                printf("%d %d %d",i,j,s);
        }
}

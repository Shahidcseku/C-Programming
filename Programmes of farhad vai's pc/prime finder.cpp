#include<stdio.h>
int main()

{
        int n,p,i,h=0;
        for(n=1;n<=10000;n++)
        {
         p=1;
        for(i=2;i<n;i++)
        {

                if(n%i==0)
                {
                        p=0;
                        break;
                }
                else
                {
                        p=1;

                }

        }
        if(p==1)
        {
                printf("%d, ",n);
                 h++;

        }

        }
        printf(" = %d\n",h);
}

#include<stdio.h>
int main()
{

    int i,j,k,l,n,m;
    for(i=1;i<10;i++)
    {
        for(j=2;j<5;j++)
        {
            for(k=9;k>0;k--)
            {
                for(l=2;l<9;l++)
                {
                    for(m=4;m<=9;m++)
                    {
                        for(n=1;n<9;n++)
                        {

                            printf("%d ",i);

                            printf("%d ",j);

                            printf("%d ",k);

                            printf("%d ",l);

                            printf("%d ",m);

                            printf("%d ",n);

                            printf("\t");


                        }
                    }
                }
            }
        }
    }
}

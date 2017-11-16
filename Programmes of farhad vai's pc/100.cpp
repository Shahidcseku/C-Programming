#include<stdio.h>
int main()
        {
                int ft,lt,a,b,m,i,c,num;
                while(scanf("%d%d",&a,&b)==2)
                {
                        c=0;
                        if(a>b)
                        {
                                ft=b;lt=a;
                        }
                        else
                        {
                                ft=a;lt=b;
                        }
                        for(i=ft;i<=lt;i++)
                        {
                                num=i;m=1;
                                while(num!=1)
                                {
                                        if(num%2==1)
                                        {
                                                num=(num*3)+1;
                                        }
                                        else
                                        {
                                                num=num/2;
                                        }
                                        m++;
                                        if(m>c)
                                        {
                                                c=m;
                                        }
                                }

                        }
                  printf("%d %d %d\n",ft,lt,c);

                }
                return 0;
        }

#include<stdio.h>
#include<math.h>
int main()
    {
        int num,lpf,rem,i,j,flag;
        while(scanf("%d",&num)!=0)
        {
            for(i=num;i>=2;i--)
            {
                flag=0;
                for(j=2;j<=sqrt(i);j++)
                {
                    if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    if(num==i)
                    {
                        printf("has no lpf.\n");
                        break;
                    }
                    else if(num%i==0)
                    {
                        printf("%d.\n",i);
                        break;
                    }
                }
            }
        }
    }


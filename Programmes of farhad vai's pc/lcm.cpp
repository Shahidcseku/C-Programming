#include<stdio.h>
int main()

{
        int n1,n2,i,lcm=1,x,y;
        int p=1;
        scanf("%d%d",&n1,&n2);
        for(i=1; ;i++)
        {
                for(int j=2;j<=n1;j++)
                {

                if(n1%j==0 && n2%j==0)
                {
                       // printf("%d\n",j);
                        lcm=lcm*j;
                        n1=n1/j;
                        n2=n2/j;
                        if(n1==1 || n2==1)
                        {
                                break;
                        }

                        }


                }
                printf("%d\n",lcm*n1*n2);
                if(p==1)
                {
                        break;
                }

        }
}

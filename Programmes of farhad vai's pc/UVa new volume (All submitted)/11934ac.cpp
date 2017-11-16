/// 11934
/// Magic formula

#include<stdio.h>
int main()
{
    long int a,b,c,d,l,i,res,counter;

    while(scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&l)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 & l==0)
        {
            break;
        }
        else
        {
            counter=0;
            for(i=0;i<=l;i++)
            {

                res=0;
                res=a*i*i+b*i+c;
                if(res%d==0)
                {
                    counter++;
                }
            }
            printf("%d\n",counter);

        }
    }
}

//10035

#include<stdio.h>
int main()
{
    int total,n1,n2,rem1,rem2,i,counter=0;

    while(scanf("%d %d",&n1,&n2)==2)

    {
        if(n1==0 && n2==0)
        {
            break;
        }
        else
        {
            counter=0;
            for(i=1; ;i++)
            {

                rem1=n1%10;
                n1=n1/10;

                rem2=n2%10;
                n2=n2/10;

                total=rem1+rem2;
                if(total>=10)
                {
                    counter++;
                }

                if(n1==0 & n2==0)
                {
                    break;
                }
            }
        }
        if(counter==0)
        {
            printf("No carry operation.\n");
        }
        else if(counter==1)
        {
            printf("1 carry operation.\n");
        }
        else
        {
            printf("%d carry operations.\n",counter);
        }
    }
}

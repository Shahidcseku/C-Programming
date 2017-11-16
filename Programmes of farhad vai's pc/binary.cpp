#include<stdio.h>
int main()
    {
        int num,rem,i,ot=0,counter;
        scanf("%d",&num);
        for(i=1;;i++)
        {
            if(num%2==0)
            {
                counter++;
            }
            rem=num%2;
            num=num/2;
            printf("%d",rem);
            ot=ot*10+rem;
            if(num==0)
            {
                break;
            }
        }
        for(int j=c)
        printf("\n%d",ot);
    }

#include<stdio.h>
#include<math.h>

int b2d(int a);
int main()

{
    int a;
    printf("Enter a binary number:\n ");
    scanf("%d",&a);
    printf("%d\n",b2d(a));
}


int b2d(int a)
{
    int i,d=0,n=0,rem=0;
    for(i=1; ;i++)
    {
        if(a==0)
        {
            break;
        }

        rem=a%10;
        a=a/10;
        d=d+(rem*pow(2,n));
        n++;
    }
    return d;
}

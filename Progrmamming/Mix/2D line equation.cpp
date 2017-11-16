#include<stdio.h>
#include<math.h>

int main()
{
    int x1, y1,x2,y2,a, b,c;
    printf("please enter x1:");
    scanf("%d", &x1);
    printf("please enter y1:");
    scanf("%d", &y1);
    printf("please enter x2:");
    scanf("%d", &x2);
    printf("please enter y2:");
    scanf("%d", &y2);

    a = x1 -x2;
    b = y1- y2;
    c = a*y1 - b*x1;

    if(b!=0)
    {
        if(b==1)
        {
            printf("x");
        }
        else if(b== -1)
        {
            printf("-x");
        }

        else
            printf("%dx", b);
    }

    if(a>0)
    {

        if(a==1)

            printf(" - y");

        else

             printf(" - %dy", a);


    }
    else if(a<0)
    {

        int nega = -1*a;
        if(a== -1)
        {
            printf(" + y");
        }

        else if(b!=0)
            printf(" + %dy", nega);
        else
            printf("%dy", nega);
    }
    if(c>0)
    {
        printf(" + %d",c);
    }
    else if (c<0)
    {
        printf(" %d", c);

    }

    printf(" = 0");
}

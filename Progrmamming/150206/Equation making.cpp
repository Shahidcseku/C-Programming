#include<stdio.h>

int main()
{
    int x1, y1,x2,y2;
    printf("Enter the value of x1:");
    scanf("%d",&x1);
    printf("Enter the value of y1:");
    scanf("%d",&y1);
    printf("Enter the value of x2:");
    scanf("%d",&x2);
    printf("Enter the value of y2:");
    scanf("%d",&y2);

    int a,b,c;

    a = x1 -x2;
    b = y1- y2;
    c = a*y1 - b*x1;

    if(b!=0)
    {
        if(b==1)
        {
            printf("x");
        }
        else if(b==-1)
        {
            printf("-x");
        }

        else
        {
            printf("%dx",b);
        }
    }

    if(a>0)
    {

        if(a==1)
        {
            printf("-y");
        }

        else
        {
             printf("-%dy",a);
        }
    }
    else if(a<0)
    {
        if(a==-1)
        {
            printf("+y");
        }

        else if(a!=0)
        {
            printf("+%dy",a*-1);
        }
        else
        {
            printf("%dy",a*-1);
        }
    }
    if(c>0)
    {
        printf("+%d",c);
    }
    else if (c<0)
    {
        printf("%d",c);

    }
     printf("=0");
    if (a==0 && b==0)
    {
        printf("(Math Error)");
    }

}

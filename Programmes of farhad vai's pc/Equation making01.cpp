#include<stdio.h>
int main()

{
    int x1,x2,y1,y2;
    printf("Enter the value of x1:");
    scanf("%d",&x1);
    printf("Enter the value of y1:");
    scanf("%d",&y1);
    printf("Enter the value of x2:");
    scanf("%d",&x2);
    printf("Enter the value of y2:");
    scanf("%d",&y2);

    int a,b,c;
    a=y1-y2;
    b=x1-x2;
    c=b*y1-a*x1;

    if(a>0 && a!=1 && b>0 && b!=1 && c>0)
        {
            printf("%dx-%dy+%d=0",a,b,c);
        }
    else if(a>0 && a!=1 && b>0 && b!=1 && c==0)
        {
            printf("%dx-%dy=0",a,b);
        }
    else if(a>0 && a!=1 && b>0 && b!=1 && c<0)
        {
            printf("%dx-%dy%d=0",a,b,c);
        }
    else if(a>0 && a!=1 && b==0 && c>0)
        {
            printf("%dx+%d=0",a,c);
        }
    else if(a>0 && a!=1 && b==0 && c==0)
        {
            printf("%dx=0",a);
        }
    else if(a>0 && a!=1 && b==0 && c<0)
        {
            printf("%dx%d=0",a,c);
        }
    else if(a>0 && a!=1 && b<0 && b!=-1 && c>0)
        {
            printf("%dx+%dy+%d=0",a,b,c);
        }
    else if(a>0 && a!=1 && b<0 && b!=-1 && c==0)
        {
            printf("%dx%dy=0",a,b);
        }
    else if(a>0 && a!=1 && b<0 && b!=-1 && c<0)
        {
            printf("%dx+%dy%d=0",a,b,c);
        }


    else if(a==0 && b>0 && b!=1 && c>0)
        {
            printf("-%dy+%d=0",b,c);
        }
    else if(a==0 && b>0 && b!=1 && c==0)
        {
            printf("%dy=0",b);
        }
    else  if(a==0 && b>0 && b!=1 && c<0)
        {
            printf("-%dy%d=0",b,c);
        }
    else   if(a==0 && b==0)
        {
            printf("Math error");
        }

    else if(a==0 && b<0 && b!=-1 && c>0)
        {
            printf("%dy+%d=0",b*-1,c);
        }
    else if(a==0 && b<0 && b!=-1 && c==0)
        {
            printf("%dy %dy %d=0",b*-1);
        }
    else if(a==0 && b<0 && b!=-1 && c<0)
        {
            printf("%dy%d=0",b*-1,c);
        }


    else  if(a<0&& a!=-1 && b>0 && b!=1 && c>0)
        {
            printf("%dx-%dy+%d=0",a,b,c);
        }
    else  if(a<0 && a!=-1 && b>0 && b!=1 && c==0)
        {
            printf("%dx-%dy=0",a,b);
        }
    else if(a<0 && a!=-1 && b>0 && b!=1 && c<0)
        {
            printf("%dx-%dy%d",a,b,c);
        }
    else if(a<0 &&a!=-1 && b==0 && c>0)
        {
            printf("%dx%d=0",a,c);
        }
    else  if(a<0 && a!=-1 && b==0 && c==0)
        {
            printf("%dx =0",a);
        }
    else if(a<0&& a!=-1 && b==0 && c<0)
        {
            printf("%dx%d=0",a,c);
        }
    else if(a<0 && a!=-1 && b<0 && b!=-1 && c>0)
        {
            printf("%dx+%dy+%d=0",a,b,c);
        }
    else if(a<0 && a!=-1 && b<0 && b!=-1 && c==0)
        {
            printf("%dx+%dy %d=0",a,b);

        }

    else if (a==1 && b==1 && c>0)
        {
            printf("x-y+%d=0",c);
        }
    else if (a==1 && b==1 && c==0)
        {
            printf("x-y=0");
        }
    else if (a==1 && b==1 && c<0)
        {
            printf("x-y%d=0",c);
        }
    else if (a==1 && b>0 && b!=1 && c>0)
        {
            printf("x-%dy+%d=0",b,c);
        }
    else if (a==1 && b>0 && b!=1 && c==0)
        {
            printf("x-%dy=0",b);
        }
    else if (a==1 && b>0 && b!=1 && c<0)
        {
            printf("x-%dy%d=0",b,c);
        }
    else if (a==1 && b==0 && c>0)
        {
            printf("x+%d=0",c);
        }
    else if (a==1 && b==0 && c==0)
        {
            printf("x=0");
        }
    else if (a==1 && b==0 && c<0)
        {
            printf("x%d=0",c);
        }
    else if (a==1 && b<0 && b!=-1 && c>0)
        {
            printf("x%dy+%d=0",b*-1,c);
        }
    else if (a==1 && b<0 && b!=-1 && c==0)
        {
            printf("x%dy=0",b*-1);
        }
    else if (a==1 && b<0 && b!=1 && c<0)
        {
            printf("x%dy%d=0",b*-1,c);
        }
    else if (a>0 && b==1 && c>0)
        {
            printf("%dx-y+%d=0",a,c);
        }
    else if (a>0 && b==1 && c==0)
        {
             printf("%dx-y=0",a);
        }
    else if (a>0 && b==1 && c<0)
        {
            printf("%dx-y%d=0",a,c);
        }
    else if (a==0 && b==1 && c>0)
        {
            printf("-y+%d=0",c);
        }
    else if (a==0 && b==1 && c==0)
        {
             printf("-y=0",c);
        }
    else if (a==0 && b==1 && c<0)

        {
               printf("-y%d=0",c);
        }
    else if (a<0 && a!=-1 && b==1 && c>0)
        {
            printf("-%dx-y+%d=0",a,c);
        }
    else if (a<0 && a!=-1 && b==1 && c==0)
        {
             printf("-%dx-y=0",a);

        }
    else if (a<0 && a!=-1 && b==1 && c<0)
        {
            printf("-%dx-y%d=0",a,c);

        }
    else if ( a==-1 && b==-1 && c>0)
        {
            printf("-x+y+%d=0",c);
        }
    else if ( a==-1 && b==-1 && c==0)
        {
            printf("-x+y=0");
        }
    else if ( a==-1 && b==-1 && c<0)
        {
            printf("-x+y%d=0",c);
        }
   else if ( a==-1 && b>0 && b!=1 && c>0)
                {
                    printf("-x-%dy+%d=0",b,c);
                }
    return 0;

}

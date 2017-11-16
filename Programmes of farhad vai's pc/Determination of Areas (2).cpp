#include<stdio.h>
int main()

{
    int choice;
    printf("Enter your choice:\n1.Rectangle\n2.Triangle\n3.Circle\n4.Cylender\n5.Sphere\n");
    scanf("%d",&choice);

    if(choice==1)
    {
        float len,wid;
        printf("Enter the length of a rectangle:");
        scanf("%f",&len);
        printf("Enter the width of a rectangle:");
        scanf("%f",&wid);
        printf("Area of the rectangle is %f sq unit.",len*wid);
    }
    else if(choice==2)
    {
        float base,height;
        printf("Enter the base of  a triangle:");
        scanf("%f",&base);
        printf("Enter the height of a triangle:");
        scanf("%f",&height);
        printf("Area of the triangle is %f sq unit.",(base*height)/2);
    }
    else if(choice==3)
    {
        float radious;
        printf("Enter the radious of a circle:");
        scanf("%f",&radious);
        printf("Area of the circle is %f sq unit.",3.1416*radious*radious);
    }
    else if(choice==4)
    {
        int ch,i;
        printf("Enter your choice:\n1.Area \n2.Volume\n");
        scanf("%d",&ch);
        if (ch==1)
        {   float rad,higt;
            printf("Enter radious of a cylender:");
            scanf("%f",&rad);
            printf("Enter the height of a cylender:");
            scanf("%f",&higt);
            printf("Area of the cylender is %f sq unit.",(2*3.1416*rad*higt));
        }
        else
        {

            float r,h;
            printf("Enter the rasious of a cylender:");
            scanf("%f",&r);
            printf("Enter the height of a cylender:");
            scanf("%f",&h);
            printf("Volume of the cylender is %f qubic unit.",3.1416*r*r*h);
        }

    }
    else
    {
        int ch;
        printf("Enter your choice:\n1.Area \n2.Volume");
        scanf("%d",&ch);
        if(ch==1)
        {
            float rad;
            printf("Enter the radious of a sphere: ");
            scanf("%f",&rad);
            printf("Area of the sphere is %f sq unit.",(4*3.1416*rad*rad));
        }

       else
       {
        float rad;
        printf("Enter the radious of a sphere:");
        scanf("%f",&rad);
        printf("Volume of the sphere is %f qubic unit.",(3.1416*rad*rad*rad)*4/3);
       }
    }

}

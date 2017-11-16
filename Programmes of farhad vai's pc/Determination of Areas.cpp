#include<stdio.h>
int main()

{
    char choice;
    printf("Enter your choice:\nA.Rectangle\nB.Triangle\nC.Circle\nD.Cylender\nE.Sphere\n");
    scanf("%c",&choice);

    if(choice=='A')
    {
        float len,wid;
        printf("Enter the length:");
        scanf("%f",&len);
        printf("Enter the width:");
        scanf("%f",&wid);
        printf("The area of the rectangle is %f sq unit.",len*wid);
    }
    else if(choice=='B')
    {
        float base,height;
        printf("Enter the base:");
        scanf("%f",&base);
        printf("Enter the height:");
        scanf("%f",&height);
        printf("The area of the triangle is %f sq unit.",(base*height)/2);
    }
    else if(choice=='C')
    {
        float radious;
        printf("Enter the radious:");
        scanf("%f",&radious);
        printf("The area of the circle is %f sq unit.",3.1416*radious*radious);
    }
    else if(choice=='D')
    {
        float r,h;
        printf("Enter the rasious:");
        scanf("%f",&r);
        printf("Enter the height:");
        scanf("%f",&h);
        printf("The volume of the cylender is %f qube unit.",3.1416*r*r*h);
    }
    else
    {
        float rad;
        printf("Enter the radious:");
        scanf("%f",&rad);
        printf("The volume of the sphere is %f qube unit.",(3.1416*rad*rad*rad)/4);
    }

}

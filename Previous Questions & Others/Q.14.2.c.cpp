#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2;
    printf("Enter teh value of a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    float check=(b*b)-(4*a*c);
    if(check>0)
    {
        printf("Roots are real numbers.\n");
        root1=(-b+sqrt(check))/(2*a);
        root2=(-b-sqrt(check))/(2*a);
        printf("Roots are: %.3f %.3f\n",root1,root2);
    }
    else if(check<0)
    {
        printf("Roots are complex number.\n");
    }
    else
    {
        printf("Roots are real equal.\n");
        printf("Root is : %.3f\n",-b/(2*a));

    }
}

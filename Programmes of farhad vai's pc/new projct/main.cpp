#include<stdio.h>
#include<math.h>
int main()
    {
        float length1,length2,base,s,b,area;
                printf("Enter the value of first length:\n");
        scanf("%f",&length1);
                printf("Enter the value of second length:\n");
        scanf("%f",&length2);
                printf("Enter the value of base:\n");
        scanf("%f",&base);
        s=(length1+length2+base)/2;
        b=s*(s-length1)*(s-length2)*(s-base);
        area=pow(b,.5);
        printf("The AREA OF TRINGLAE IS: %.2f UNIT",area);
        return 0;

    }

#include<stdio.h>
int main()
{
    float phy,chem,math,eg;

    scanf("%f%f%f",&math,&phy,&chem);

    if(math>=3.5 && phy>+3.5 && chem>=3.0 && ((phy+math+chem)>=11.00 || (math+phy)>=8.5))
    {
        printf("Elegible\n");
    }
    else
    {
        printf("Not elegible\n");
    }
}

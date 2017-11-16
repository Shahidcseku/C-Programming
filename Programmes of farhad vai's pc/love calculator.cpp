#include<stdio.h>
int main()
{
    char name1,name2;
    printf("Enter first name:\n");
    scanf("%s",&name1);
    printf("Enter second name:\n");
    scanf("%s",&name2);
    int total,g;
    total=(name1-name2);
   g=(total/100)*10;
    printf("%1d%%",g);
}

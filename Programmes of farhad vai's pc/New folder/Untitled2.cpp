#include<stdio.h>
int main()
{
    float degree=0,radian=0;
    int i;
    scanf("%f",&degree);

    while(radian>=90.0)
    {
        radian=degree/57.0;

    }
    printf("%f",radian);
}

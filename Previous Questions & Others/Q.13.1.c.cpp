#include<stdio.h>
int main()

{
    float i,n,total=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        total+=1/i;
    }
    printf("%.2f",total);
}

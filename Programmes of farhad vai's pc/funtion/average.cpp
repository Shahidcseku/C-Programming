
#include<stdio.h>
float avg(int n,char a[])
{
    float value=a[0];
    for(int i=0;i<n;i++)
    {
        value+=a[i];

    }
    value=value/10;
    return value;
}
int main()
{
    int n=10;
    char a[]={1,2,3,4,5,6,7,8,9,10};
    float  max=avg(n,a);
    printf("%f",max);
}

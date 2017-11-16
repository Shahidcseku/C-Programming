#include<stdio.h>
int gcd(int a, int b);
int main()

{
    int a,b;
    scanf("%d%d",&a,&b);

     printf("%d\n",gcd(a,b));
}
int gcd(int a, int b)
{
    int c;
    if(a%b==0)
        return b;
    return gcd(b,a%b);

}


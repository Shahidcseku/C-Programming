///PASSCAL'S TRIANGLE

#include<stdio.h>
int fact(int a)
{
    int i,fac=1;
    for(i=1;i<=a;i++)
    {
        fac=fac*i;
    }
    return fac;

}
int main()
{
    int n,i,j,p=1;
    printf("Enter the number of lines:\n");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {

        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(j=0;j<=i;j++)
        {
            p=fact(i)/(fact(j)*fact(i-j));
            printf(" %d",p);
        }
        printf("\n");
    }
}

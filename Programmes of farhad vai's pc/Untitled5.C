#include<stdio.h>
int main()
{
int i,j,k,n;
printf("Enter the number of lines to be printed ;");
scanf("%d",&n);
printf("\n\n");
for(i=1;i<=n;i++)
{for(j=1;j<=i;j++)
{printf("%3d",(j*i));}
printf("\n");}
for(k=n-1;k>0;k--)
{for(j=1;j<=k;j++)
printf("%3d",(k*j));
printf("\n");
}
}

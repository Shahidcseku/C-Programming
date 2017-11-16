#include<stdio.h>//140226
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n+1-i;k++)
		{
			printf(" *");
		}
		printf("\n");
	}
}


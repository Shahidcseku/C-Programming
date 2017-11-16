#include<stdio.h>
int main()
	{
		int n,i,j,k,l;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(l=1;l<=i;l++)
			{
				printf(" ");
			}
			for(j=1;j<=2*n+2-2*i;j++)
			{
				printf("*");
			}
			for(k=1;k<=i;k++)
			{
				printf(" ");
			}
			printf("\n");
		}
		for(i=0 ;i<=n;i++)
		{
			for(l=1;l<=n+1-i;l++)
			{
				printf(" ");
			}
			for(j=1;j<=2*i+1;j++)
			{
				printf("*");
			}
			for(k=1;k<=n+1-i;k++)
			{
				printf(" ");
			}
			printf("\n");
		}
	}

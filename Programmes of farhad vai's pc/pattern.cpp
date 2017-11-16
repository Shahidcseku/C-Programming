#include<stdio.h>
int main()
{
	int i,j,k,n,l;
	scanf("%d",&n);

	for (i=1;i<=n;i++)
	{
		for (j=1;j<=i;j++)
		{
			printf("*");
		}

		for(k=2*n-2*i;k>0;k--)

		{
			printf(" ");
		}

		for(l=1;l<=i;l++)
		{
			printf("*");
		}

		printf("\n");
	}

	int a,b,c,d;

	for(a=1;a<=n;a++)

	{
		for(b=n-a;b>0;b--)
		{
			printf("*");
		}
		for(c=1;c<=2*a;c++)
		{
			printf(" ");
		}

		for(d=n-a;d>0;d--)

		{
			printf("*");
		}

		printf("\n");
	}
}

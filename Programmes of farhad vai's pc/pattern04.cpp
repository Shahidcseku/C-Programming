
// PATTERN 3
#include<stdio.h>
int main()

{
	int i,j,k,m,t;
	scanf("%d",&t);

	for(i=0;i<t;i++)
	{
		for(j=t-i;j>=1;j--)
		{
			printf("*");
		}
			for(k=0;k<2*i;k++)
			{
				printf(" ");
			}
			for(m=t-i;m>=1;m--)
			{
				printf("*");
			}
		printf("\n");
	}

	int a,b,c,d;
	for(a=1;a<=t;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}

		for(c=2*t-2*a;c>0;c--)
		{
			printf(" ");
		}
		for(d=1;d<=a;d++)
		{
			printf("*");
		}
		printf("\n");
	}
}

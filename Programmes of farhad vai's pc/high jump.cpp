
// 11764
#include<stdio.h>
int main()
{
	int t,n,i,high,low,check,j,a;

	scanf("%d",&t);

	for (i=1;i<=t;i++)
	{

		high=0;
		low=0;
		scanf("%d",&n);
		scanf("%d",&check);

		for(j=1;j<n;j++)
		{
			scanf("%d",&a);
			if(a>check)
			{
				high++;
				check=a;
			}

			 if (a<check)
			{
				low++;
				check=a;
			}
		}

		printf("Case %d : %d %d\n",i,high,low);
	}
}

#include<stdio.h>

int main()

{
    int n,i,j,rem,lpf=0,fact,prime;

    scanf("%d",&n);
    for (i=n-1;i>=2;i--)
    {
        for (j=i-1;j>=2;j--)
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }
            else
            {

                if(n%i==0)
                {
                    lpf=i;
                    break;
                }

            }
            }
            if(lpf==i)
            {
                break;
            }
        }

    printf("%d",lpf);
}

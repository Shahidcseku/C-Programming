
/// Floyd's Triangle
#include<stdio.h>
int main()

{
    int i,j,f,k=0;
    for(i=1; ;i++)
    {
        for(j=1;j<=i;j++)
        {
            k++;
            printf("%d ",k);

            if(k==91)
            {
                f=0;
                break;
            }
        }
        printf("\n");
        if(f==0)
        {
            break;
        }
    }
}

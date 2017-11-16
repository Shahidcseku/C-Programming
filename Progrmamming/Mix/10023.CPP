#include<stdio.h>
#include<math.h>
int main()

{
    long int x,y;
    int total,i;
    scanf("%d",&total);
 for(i=total;i>=1;i--)
    {
        scanf("%ld",&y);
        if(1<=y)
        {
            x= sqrt (y);
            printf("%ld\n",x);
        }

    }

}

#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=1;i<10;i++){for (j=0;j<100;j+a)printf("%d %d =%d\n",a,i,j);
    }

}

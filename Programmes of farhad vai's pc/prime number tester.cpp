#include<stdio.h>
#include<stdlib.h>
int main()

{
    e:
    int a,i,p;
    printf("\nEnter a number to test:\n");
    scanf("%d",&a);
        p=1;
    for (i==2;i<=(a/2);i++)

    if((a%i)==0) p=0;{
    if(p==1){
     printf("The number is prime.");
    }
    else
{
    printf("The number is not prime.\n");
}
    }
    system("cls");
goto e;
}

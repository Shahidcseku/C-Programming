#include<stdio.h>
int small(char n[10],int num);
int main()

{
    int num=10;
    char a[10]={13,3,2,5,9,8,7,6,4,10};
   int min=small(a,num);
   printf("%d",min);
}

int small(char n[10],int num)
{
    int s=n[0];
    for(int i=0;i<10;i++)
    {
        if(s>n[i])
        {
            s=n[i];

        }
    }
    return s;
}

///STRINT REVERSE USING FUNCTION
#include<stdio.h>
void reverse(char a[],int b);
int main()

{
    char ch[]={5,3,65,4,56,8,9,45,69,788,25};
    int len=10;
    reverse(ch,len);
}
void reverse(char a[],int b)
{
    int i;
    for(i=b;i>=0;i--)
    {
        printf("%d,",a[i]);
    }
}

#include<stdio.h>
int src(char a[],int n);
int main()
{
    char a[]={1,2,3,5,6,58,8,58,8,66,5,5,5,8,66,65,99,55,22,5,66,5,5,6};
    int n=99;
    int re=src(a,n);
    printf("%d",re);


}
int src(char a[],int n)
{
    int i,re,min=0,max=24,mid;
    mid=(min+max)/2;
    for(i=1; ;i++)
    {
        if(n==mid)
        {
           re=mid;
           break;

        }
        else if(n>mid)
        {
            min=mid+1;
        }
        else
        {
            max=mid-1;
        }
    }
    return re;
}

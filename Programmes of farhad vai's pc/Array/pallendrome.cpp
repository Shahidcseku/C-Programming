#include<stdio.h>
int main()
{
    int i,j,k;
    int a[20],n[20];
    while(scanf("%d",&n[i])

{
        for (i=0; ;i++)
    {
        a[i]=n%10;
        n=n/10;

        if(n==0)
        {
            break;
        }
    }
    for(i=i;i>=0;i--)
    {
        if(a[i]==n[i])
        {
            p=1;
        }
        else
        {
            p=0;
            break;
        }
    }
    if(p==1)
    {
        printf("Pallendrome\n");
    }
    else
    {
        printf("Not palendrome\n");
    }
}

}
}

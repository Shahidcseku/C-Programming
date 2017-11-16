
#include<stdio.h>
int main()

{
    FILE *fp;
    fp=fopen("output.txt","w");
    int i,n,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%4==0 && i%11!=0)
        {
            c++;
            fprintf(fp," %d",i);
        }
    }
    printf("Total number is :%d.",c);
}



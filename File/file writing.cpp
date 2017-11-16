#include<stdio.h>
int main()

{
    FILE *fp;
    int i,n[100];
    fp=fopen("file.doc","r");

    for(i=1;i<99;i++)
    {
        fscanf(fp,"%d",&n[i]);
    }
    for(i=1;i<99;i++)
    {
        printf("%d ",n[i]);
    }

    fclose(fp);

}

#include<stdio.h>
int main()

{
    FILE *fp1,*fp2;
    char s[100];
    fp1=fopen("fcpy.txt","r");
    fp2=fopen("filecpy.txt","w");
    fscanf(fp1,"%s",&s);
    fprintf(fp2,"%s",s);

    fclose(fp1);
    fclose(fp2);

}

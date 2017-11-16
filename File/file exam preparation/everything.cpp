#include<stdio.h>
int main()

{
    FILE *fp,*fp1;
    char ch[1000];
    /// Write to file

    fp=fopen("new.txt","w");
    ///scanf("%s",&ch); (This will input a single word)
    gets(ch);
    fprintf(fp,"%s",ch);
    fclose(fp);


    /// Read from file

    fp=fopen("new.txt","r");
    fgets(ch,1000,fp);
    puts(ch);
    /// Copy  to another file

    fp=fopen("new.txt","r");
    fp1=fopen("new1,txt","w");

    fgets(ch,1000,fp);
    fputs(ch,fp1);
    fclose(fp);
    fclose(fp1);

}

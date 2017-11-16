#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    char a,b[1000];
    f1=fopen("input.txt","w");
    while(a=getchar()!=EOF)
    {
        fprintf(f1,"%c",a);
    }

    fclose(f1);

    f2=fopen("input.txt","r");
    f3=fopen("write.txt","w");

    fgets(b,1000,f2);
    puts(b);
    fclose(f2);
    fclose(f3);


}

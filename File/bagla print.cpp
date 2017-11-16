#include<stdio.h>
int main()
{
    FILE *f;
    char a[2000];
    f=fopen("file.doc","r");

    fgets(a,200,f);
    puts(a);
}

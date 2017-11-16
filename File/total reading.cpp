
#include<stdio.h>
int main()

{
    FILE *f;
    char a[100];
    f=fopen("fread.txt","r");
    fgets(a , 100 , f);
    puts(a);
}

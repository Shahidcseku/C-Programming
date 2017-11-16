#include<stdio.h>
int main()

{
    FILE *fp;
    char mail[999];
    fp=fopen("mail.txt","r");
    fgets(mail,999,fp);
    puts(mail);
    fclose(fp);

/// enter  এর পরের অংশ প্রিন্ট হয় না
}

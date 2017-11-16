/// STRING COPY USING FUNCTION

#include<stdio.h>
char copy(char a[],char b[]);
int main()
{
    char ch[]={"Bangladesh"},cp[100];

    copy(ch,cp);

}
char copy(char a[],char b[])
{
    int i;
    for(i=0; ;i++)
    {
        b[i]=a[i];
        if(a[i]==NULL)
        {
            break;
        }

    }
     puts(b);
}

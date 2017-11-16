/// STRING LENGTH USING FUNCTION
#include<stdio.h>
int len(char a[]);
int main()
{
    char ch[]={"the brown fox quick jumps over the lazy dog"};
    int l=len(ch);
    printf("Length of the string is %d\n",l);
}
int len(char a[])
{
    int i,c=0;
    for(i=0; ;i++)
    {
        c++;
        if(a[i]==NULL)
        {
            break;
        }
    }
    return c;
}

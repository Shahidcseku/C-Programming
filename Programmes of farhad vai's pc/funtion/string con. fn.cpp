/// STRING CONCATANATION USING FUNCTION
#include<stdio.h>
void con(char a[],char b[]);
int main()
{
    char ch1[]={"Bangla"},ch2[]={"desh"};
    con(ch1,ch2);

}


void con(char a[],char b[])
{
    int i,j=0;
    for(i=0; ;i++)
    {
        if(a[i]==NULL)
        {
            break;
        }
    }
    for(i; ;i++)
    {
        a[i]=b[j];
        j++;
        if(b[j]==NULL)
        {
            break;
        }
    }

    puts(a);
}

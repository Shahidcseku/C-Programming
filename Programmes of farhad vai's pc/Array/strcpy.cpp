#include<stdio.h>
int main()

{
    int i,j,k=0;
    char str[200],str1[100];

    gets(str);
    gets(str1);

    for(i=0; ;i++)
    {
        if(str[i]==NULL)
        {
            break;
        }
    }
    for(j=i; ;j++)
    {
        str[j]=str1[k];
        k++;
        if(str1[k]==NULL)
        {
            break;
        }
    }

    puts(str);
}

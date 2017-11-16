#include<stdio.h>
int main()

{
    int counter=0,i;
    char str[9999];
    gets(str);

    for(i=0; ;i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            counter++;
        }
        if(str[i]==NULL)
        {
            break;
        }
    }
    printf("Total number of vowels : %d\n",counter);
}

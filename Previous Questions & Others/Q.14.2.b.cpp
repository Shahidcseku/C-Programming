#include<stdio.h>
int main()
{
    int i,j;
    char n[100];
    printf("Enter a number:\n");
    gets(n);
    for(i=0;; i++)
    {
        for(j=i; ;j++)
        {
            printf("%c",n[j]);
            if(n[j]==NULL)
            {
                break;
            }
        }
        printf("\n");
        if(n[i]==NULL)
        {
            break;
        }
    }
}

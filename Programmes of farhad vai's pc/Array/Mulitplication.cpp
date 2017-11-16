#include<stdio.h>
int main()

{
    int i,j;
    char n1[10],n2[10],res[11];
    gets(n1);
    gets(n2);

    for(i=0; ;i++)
    {
        n1[i]=n1[i]-48;
        n2[i]=n2[i]-48;
        if(n1[i]==NULL )
        {
            n1[i]=NULL;
            break;
        }
    }
    for(i=0; ;i++)
    {

        if(n1[i]==NULL)
        {
            break;
        }
        printf("%d %d\n",n1[i],n2[i]);
    }
}

#include<stdio.h>
#include<string.h>
int main()

{
    int start,end,f=1,len;
    char str[100],src[10];
    printf("Enter a string:\n");
    gets(str);
    printf("Enter a substring:\n");
    gets(src);

    len=strlen(src);
    int i,j,k,u;
    for(u=0;str[u]==NULL;u++)
    {
        for(i=0;i<u;i++)
        {

        if(str[i]==src[0])
        {
            start=i;
            k=0;
            for(j=i+1;j<=len;j++)
            {
                k++;
                if(str[j]!=src[k])
                {
                    f=0;
                    break;


                }
                end=j;
            }
        }
        }
    }
    if(f!=0)
    {
        printf("Found at %d to %d\n",start,end);
    }

}

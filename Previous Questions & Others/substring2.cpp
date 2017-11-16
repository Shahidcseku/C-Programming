#include<stdio.h>
int main()

{
    int i,j,k,flag;
    char str[1000],src[100];
    gets(str);
    gets(src);

    for(i=0; ; i++)
    {
        if(str[i]==NULL)
        {
            break;
        }
        if(str[i]==src[0])
        {
            flag=1;

            for(j=1; ; j++)
            {
                if(src[j]==NULL)
                {
                    break;
                }

                if(str[i+j]!=src[j])
                {
                    flag=0;
                    break;
                }

            }
            if(flag==1)
            {
               break;
            }

        }
    }
    if(flag==1)
    {
        printf("Found");
    }
    else
    {
        printf("Not found");
    }

}

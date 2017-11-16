/// NOT EXACTLY AS QUESTION BUT A DIFFICULT THAN THAT.
#include<stdio.h>
int main()

{
    int i,j,init =0,init2=0;;
    char str[10000];
    gets(str);

    puts(str);
    printf("\n\n%c",str[0]);


    for(i=0; ;i++)
    {

        if(str[i]==' ')
        {
            printf(".%c",str[i+1]);
        }
        if(str[i]==NULL)
        {
            break;
        }
    }
    printf("\n\n");

    for(i=0; ;i++)
    {
        if(str[i]==' ')
        {
            printf("\n");

        }
        else
        {
            printf("%c",str[i]);
        }
        if(str[i]==NULL)
        {
            break;
        }
    }

    printf("\n\n");


    for(i=0; ;i++)
    {

        init=init2;

        if(str[i]==' ')
        {
            init2=i+1;
            for(j=i-1;j>=init;j--)
            {

                printf("%c",str[j]);
            }
            printf("\n");
        }
        if(str[i]==NULL)
        {
            for(j=i-1;j>=init;j--)
            {

                printf("%c",str[j]);
            }
            break;
        }
    }



}

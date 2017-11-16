/// SAME AS QUESTION
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
        if(str[i]==NULL)
        {
            break;
        }
    }
    for(j=i-1;j>=0;j--)
           {
               if(str[j]==' ')
                  {
                    printf("\n");
                  }
                  else
                    {
                        printf("%c",str[j]);
                    }
              }



}


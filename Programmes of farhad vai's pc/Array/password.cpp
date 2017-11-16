#include<stdio.h>
int main()
{
    int i,j,n,f=0;
    char p1[10],p2[10];

    printf("Enter a password :\n");

    gets(p1);

    printf("Re-enter password :\n");

    gets(p2);

    for(i=0;i<10;i++)
    {
        if(p1[i]!=p2[i])
        {
            f=1;
            break;
        }
        if(p1[i]==NULL)
        {
            break;
        }
    }



    for(j=i;j<10;j++)
    {
          if(p1[j]==NULL || p2[j]==NULL)

        {
            f=1;
            break;
        }
    }

    if(f==0)
    {
        printf("Correct.\n");
    }
    else
    {
        printf("Incorrect.\n");
    }
}

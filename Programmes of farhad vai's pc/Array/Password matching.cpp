#include<stdio.h>
int main()

{
    int i,j,f=0;
    char pass[10],sp[10]="255462982";


    printf("Enter a password: \n");
    gets(pass);

    for(i=0;i<10;i++)
    {

        if(pass[i]!=sp[i])
        {
           f=1;
            break;
        }
        if(pass[i]==NULL)
        {
            break;
        }
    }
    if(i==9)
    {
        if(f==0)
        {
            puts("Correct.\n");
        }

        else
        {
            puts("Incorrect.\n");
        }
    }


}

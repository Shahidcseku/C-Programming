#include<stdio.h>
int main()

{
    int i,j,t,total=0,count;
    char n[81];
    scanf("%d",&t);

    for (j=0;j<=t;j++)
    {
        count=0;

        for(i=0; ;i++)
        {
             scanf("%c",&n[i]);
    {

        if(n[i]=='O')
        {
            count++;
            printf("%d  \n",count);
        }
        else
        {
            count=0; printf("%d  \n",count);
        }
        total=total+count;


    printf("%d\n",total);

    }
        }


    }

}

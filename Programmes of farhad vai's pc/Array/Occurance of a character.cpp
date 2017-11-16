#include<stdio.h>
int main()
{
    int i,j=0;
    char ch[1000],a;

    printf("Enter a message:\n");
    gets(ch);
    printf("Which charecter do you terget:\n");
   scanf("%c",&a);


    for(i=0; ;i++)
    {
        if(ch[i]==NULL)
        {
            break;
        }
        if(a==ch[i])
        {
            j++;
        }
    }
    printf("%c existed in this message %d times\n",a,j);
}

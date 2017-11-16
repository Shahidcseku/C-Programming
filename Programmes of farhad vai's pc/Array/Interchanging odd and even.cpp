#include<stdio.h>
int main()

{
    int i,n,j=0,k=0;

    int odd[1000],even[1000];
    char num[2000];

    printf("Enter numbers :");
    gets(num);
    for(i=0; ;i++)
    {

        if(num[i]==NULL)
        {
            break;
        }
        if(num[i]%2==0)
        {
            even[j]=i;
            j++;
        }
        else
        {
            odd[k]=i;
            k++;
        }

    }

    for(j=0;j<i/2;j++)
    {
        printf("%d",odd[i]);
    }
    printf("\n\n");
    for(j=0;j<i/2;j++)
    {
        printf("%d",even[i]);
    }
}

#include<stdio.h>
int main()
{
    int i,j,temp,num;
    int n[100];

    printf("How many numbers ?\n");
    scanf("%d",&num);
    printf("Enter %d numbers : \n\n",num);
    for (i=0;i<num;i++)
    {
        scanf("%d",&n[i]);
    }

    for (i=0;i<num;i++)
    {
        for (j=num;j>0;j--)
        {
            if(n[j-1]>n[j])
            {
                temp=n[j-1];
                n[j-1]=n[j];
                n[j]=temp;
            }
        }

    }
    for (i=0;i<num;i++)
    {
        printf("%d  ",n[i]);
    }

}

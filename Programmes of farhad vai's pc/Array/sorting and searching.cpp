#include<stdio.h>
int main()

{
    int i,j,n,temp;
    int a[10],b[10];

    printf("Enter 10 numbers:\n\n\n\n");

    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

   for (i=0;i<10;i++)
    {
        for (j=9;j>=0;j--)
        {
            if(a[j-1]>a[j])
            {
                temp=a[j-1];
                a[j-1]=a[j];
                a[j]=temp;
            }
        }

    }

    printf("Sorted list is :\n\n");
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    printf("\nEnter a number for search:\n");
    scanf("%d",&n);

    for(i=0;i<10;i++)
    {
        if(n==a[i])
        {
            printf("Found %d at %d\n",n,i);
            break;
        }
    }

    if(i==10)
    {
        printf("Not found");
    }
}

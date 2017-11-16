#include<stdio.h>


int main()
{

    int arr[] = {1,1,2,2,3,4,4,5,5,6,6};
    int i;
    for(i=0;i<11;i+=2)
    {

        if(arr[i]!=arr[i+1])
        {

            printf("%d,",arr[i]);
            i++;

        }
    }
}

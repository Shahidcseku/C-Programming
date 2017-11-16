/// Repeated in array finding

#include<iostream>
using namespace std;
int main()
{

    int arr[27] = {24,456,56,456,56,456,6,7,34,34,45,6,345,45,45,45,34,7,567,4,565,454,432,2,4,4,2};

    for(int i = 0;i<27;i++)
    {
        for(int j=i;j<27;j++)
        {


            if(arr[i]>arr[j])
            {

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }

    for(int i=0;i<27;i++)
    {
       while(arr[i]==arr[i+1])
       {

           i++;
       }



    }

}

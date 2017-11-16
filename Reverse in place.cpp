#include<iostream>
using namespace std;

int main()
{

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    int l = sizeof(arr)/sizeof(int)-1;

   for(int i=0;i<l/2;++i){

            int temp = arr[i];
            arr[i] = arr[l-i];
            arr[l-i] = temp;

    }

    for(int i=0;i<=l;i++)
    {

        cout<< arr[i]<< endl;
    }


}

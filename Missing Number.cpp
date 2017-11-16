#include<iostream>
using namespace std;

int main()
{

    int arr[] = {1,2,3,4,5,6,7,9,10,11,12,13,14,15,17,18,19,20};
    int value =1;
    for(int i =0;i<18;i++)
    {


        if(arr[i]!=i+value)

        {

            cout<< i+value<<",";
            value++;
        }
    }
}

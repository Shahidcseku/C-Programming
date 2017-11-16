///11526
///H(n)
#include<iostream>
using namespace std;
int main()
{
    long long int n,res;
    int t,j;
    cin>>t;
    for (j=1;j<=t;j++)
    {

        res = 0;

        cin>>n;

        for( int i = 1; i <= n; i=i+1)
            {
                res = (res + n/i);
            }
        cout<<res<<endl;
    }


}


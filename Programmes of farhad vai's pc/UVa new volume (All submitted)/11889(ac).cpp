///11889
/// Benefit

#include<iostream>
using namespace std;
typedef long long LL;
LL gcd(LL a,LL b)
{
    if(b==0)return a;
    else
        return gcd(b,a%b);
}
LL lcm(LL a,LL b)
{
    return a*b/gcd(a,b);
}
int main()
{
    long long int i,j,t,a,c,b;

    cin>>t;

    for (j=1;j<=t;j++)
    {
        cin>>a>>c;
        b=c/a;
        if(c%a!=0)
        {
             cout<<"NO SOLUTION"<<endl;
             continue;

        }
        for(i=b;i<c;i+=b)
        {
            if(lcm(i,a)==c)

            break;


        }
        cout<<i<<endl;



    }
}

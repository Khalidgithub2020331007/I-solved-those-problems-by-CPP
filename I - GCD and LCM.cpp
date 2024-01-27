#include<iostream>
using namespace std;
 long long c;
  long long gcd( long long a, long long b)
{

    if(b%a==0)
        return a;

    else
        return gcd(b%a,a);
}

int main()
{
long long t,i;
    long long a,b;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }
        c=0;
        cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
    }
    return 0;
}

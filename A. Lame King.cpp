#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        a=abs(a);
        b=abs(b);
        if(a<b)
        {
            a=a^b;
            b=a^b;
            a=a^b;
        }
        b=a+b<a+a-1?a+a-1:a+b;
        cout<<b<<endl;
    }
}

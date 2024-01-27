#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {

        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
 main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        double gn,ln;
        gn=gcd(n,m);
        double nd;
        double md;
        nd=n;
        md=m;
        ln=nd*md/gn;
//        cout<<(gn+ln)<<"   "<<nd+md<<endl;
        if (gn+ln==nd+md)
        {
            cout<<"true"<<endl;
        }
        else
            cout<<"false"<<endl;
    }
}

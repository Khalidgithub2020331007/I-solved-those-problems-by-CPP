#include<bits/stdc++.h>
#define int long long
using namespace std;
int gcd(int a,int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}
int lcm(int a,int b)
{

    return (a*b)/gcd(a,b);
}
main()
{
    int t;
    int j=0;
    cin>>t;
    while(t--)
    {
        j+=1;
        int a,b,l;
        cin>>a>>b>>l;
        int lc=lcm(a,b);
//        cout<<lc<<endl;
        bool d =false;
        cout<<"Case "<<j<<": ";
        for (int i=1;i<=1000005;i++)
        {
            if (i>l)
                break;

                if (lcm(lc,i)==l)
                {
                    d=true;
                    cout<<i<<endl;
                    break;
                }

        }
        if (!d)
            cout<<"impossible"<<endl;

    }
}

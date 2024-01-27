#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
            continue;
        }
        int i;
        int f=0;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                f=n/i;
                break;
            }
        }
        if(!f) cout<<1<<" "<<n-1<<endl;
        else cout<<f<<" "<<n-f<<endl;
    }
    return 0;
}

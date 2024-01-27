#include<bits/stdc++.h>
using namespace std;
#define int long long
 main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n+5];
        a[0]=0;
        cin>>a[1];
        int i;
        for(i=2;i<=n;i++)
        {
              cin>>a[i];
              a[i]+=a[i-1];
        }

          for(i=0;i<m;i++)
          {
               int l,r,q;
            cin>>l>>r>>q;
            int m =a[n]-a[r]+a[l-1];
            m+=(r-l+1)*q;
            if(m%2==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
          }

    }
}

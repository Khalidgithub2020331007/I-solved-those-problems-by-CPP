#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    map<int,int>m;
    int n;
    cin>>n;
    int i;
    int ma,mi;
    ma=0;
    mi=INT_MAX;
    for(i=0;i<n;i++)
    {
        int x;
        cin>>x;
        ma=max(ma,x);
        mi=min(mi,x);
        m[x]++;

    }
  // cout<<m[ma]<<" "<<m[mi]<<" "<<ma<<" "<<mi<<endl;
    cout<<ma-mi<<" ";
    int c=m[ma]*m[mi];
    if(ma==mi)
   c=m[ma]*(m[mi]-1)/2;
   cout<<c<<endl;

}

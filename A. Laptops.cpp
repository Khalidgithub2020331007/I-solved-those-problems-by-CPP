#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    int i;
    for(i=0;i<n;i++)
    {
      int x,y;
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end());
    int a[n];
    int d=1;
    for(i=0;i<n;i++)
    {
        a[i]=v[i].second;
    }
     for(i=0;i<n-1;i++)
    {
        if(a[i]<=a[i+1])
        {
            d=0;
            cout<<"Poor Alex"<<endl;
            break;
        }
    }
    if(d) cout<<"Happy Alex"<<endl;
}

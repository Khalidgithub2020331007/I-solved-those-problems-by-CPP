#include<bits/stdc++.h>
using namespace std;
#define int long long
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ma=0,i,x;
        cin>>n;
        map<int,int>m;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            m[x-i]++;

        }

       for(auto it:m)
       {
           ma+=(it.second*(it.second-1)/2);
       }
       cout<<ma<<endl;



    }
}

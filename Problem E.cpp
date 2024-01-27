#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main()


{
    int t;
    cin>>t;
    for(int i1=0; i1<t; i1++)
    {
        int n;
        cin>>n;

        int a1[n];
        for(int i=0; i<n; i++)
        {
            cin>>a1[i];
        }
        vector<int>a;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(a1[i]==a1[i+1]) cnt++;
            else
            {
                a.push_back(cnt+1);
                cnt=0;
            }
        }
        int sum=0;
        sort( a.begin(), a.end());
        for(int i=a.size()-1; i>=0; i--)
        {
            if(a[i]==0) break;
            else sum+=(a[i]*(a[i]+1))/2;
        }
        int s=(n*(n+1))/2;
        cout<<"Case "<<i1+1<<": "<<s-sum<<endl;
    }
}

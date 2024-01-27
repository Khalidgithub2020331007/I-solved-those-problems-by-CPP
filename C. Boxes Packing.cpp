#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>myMap;
    int n;
    cin>>n;
    int ans;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        myMap[a]++;
        ans=max(ans,myMap[a]);

    }
    cout<<ans;
}

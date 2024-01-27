#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    int n,i;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        if(a[i] ==0) a[x]++;


    }
    int j=0;
    for(i=1;i<=n;i++)
        if(a[i]==0) j++;
        cout<<j<<endl;
         for(i=1;i<=n;i++)
        if(a[i]==0) cout<<i<<" ";


}

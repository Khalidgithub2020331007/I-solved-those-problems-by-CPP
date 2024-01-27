#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int i;
    int a[n+1];
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (i=0;i<m;i++)
    {
        cin>>n;
        sum+=a[n];
    }
    cout<<sum;
}

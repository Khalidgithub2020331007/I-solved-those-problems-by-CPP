#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n+5],b[n+5];
    int i,j,d,e,c,m;
    a[0]=b[0]=0;
    for(i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=a[i-1]+b[i];
    }

    sort(b,b+(n+1));
    for(i=1;i<=n;i++)
    {
        b[i]=b[i-1]+b[i];
    }

    cin>>m;
    for(i=1;i<=m;i++)
    {
        cin>>d>>e>>c;
        if(d==1) cout<<a[c]-a[e-1]<<endl;
        else cout<<b[c]-b[e-1]<<endl;
    }
    return 0;

}

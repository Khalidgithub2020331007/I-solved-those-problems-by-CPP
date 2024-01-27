#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100009];

int32_t main()
{
    int n;
     int i,m=0,mi=10000000;
     cin>>n;
    for(i=0;i<n;i++)
    {
       // cout<<"YES"<<endl;
        int x;
        cin>>x;
        m=max(x,m);
        mi=min(x,mi);
        a[x]++;

    }
   // cout<<"2YES"<<endl;
    int sum=0;
    for(i=m;i>=mi;i--)
    {
        int x=a[i]<a[i-1]?a[i]:a[i-1];
        sum+=x*i;
        a[i]=a[i]-x;
        a[i-1]=a[i-1]-x;

    }
     for(i=m;i>=mi;i--)
    {

        sum+=i*a[i];
    }
    cout<<sum<<endl;
}

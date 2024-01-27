#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=0,y=0,a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>0) x++;
            else y++;
        }
        int i;
        for(i=1;i<=x;i++)
            cout<<i<<" ";
        for(;i<=n;i++) cout<<--x<<" ";

        cout<<endl;
        for(i=0;i<y;i++)
            cout<<1<<" "<<0<<" ";
            x=1;
        for(int j=0;j<(n-(2*y));j++) cout<<x++<<" ";
        cout<<endl;
    }
}

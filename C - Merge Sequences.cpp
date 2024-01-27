#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>s,ss;
    int n,m;
    cin>>n>>m;
    int i,j;
    j=0;

    int a[n],b[m],c[n+m+5];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        c[j++]=a[i];

    }
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        c[j++]=b[i];

    }
    sort(c,c+n+m);
    int k=0;
    j=0;
    for(i=0;i<(n+m);i++)
    {
        if(c[i]==a[k])
        {
            s.insert(i+1);
            k++;
        }
        else {
            ss.insert(i+1);

        }
    }
    for(auto x:s)
        cout<<x<<" ";
    cout<<endl;
    for(auto x:ss)
        cout<<x<<" ";

}

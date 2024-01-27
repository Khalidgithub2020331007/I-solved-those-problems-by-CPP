#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
        int m;
        cin>>m;
         auto lower=lower_bound(a,a+n,m);
        int lowerindex=distance(a,lower);

        if(a[lowerindex]==m)
            cout<<"Yes "<<lowerindex+1<<endl;
        else
            cout<<"No "<<distance(a,upper_bound(a,a+n,m))+1<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int p,s,r;
        cin>>p>>s>>r;
        cout<<"Case "<<i+1<<": ";
        if(p==s&&r!=1) cout<<"NO"<<endl;
        else  cout<<"YES"<<endl;
    }

}

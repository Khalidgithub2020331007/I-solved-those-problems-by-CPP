#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        char a[n],b[n];
        cin>>a>>b;
        sort(a,a+strlen(a));
        sort(b,b+strlen(b));
       // cout<<a<<" "<<b<<endl;
        if(strcmp(a,b)==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}

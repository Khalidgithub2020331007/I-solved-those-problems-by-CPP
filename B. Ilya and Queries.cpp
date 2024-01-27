#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,a[s.length()],q;
    cin>>q;
    a[0]=0;
    for(i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])a[i+1]=a[i-1+1]+1;
        else a[i+1]=a[i];
    }
    while(q--)
    {
        int n,m;
        cin>>n>>m;
        cout<<a[m]-a[n]<<endl;


    }



}

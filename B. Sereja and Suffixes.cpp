#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long int a[100009],b[100009];
int main()
{
    int t,n,i,j,k,l;
    set<int>s;
    cin>>t>>n;
    for(i=1;i<=t;i++)
    {
        cin>>a[i];
    } for(i=t;i>0;i--)
    {
        s.insert(a[i]);

       b[i]=s.size();
    }
    for(i=0;i<n;i++)
    {
        cin>>t;
        cout<<b[t]<<endl;
    }
   return 0;
}


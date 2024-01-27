#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    pair<int,int>mp;
    map<pair<int,int>,string>mymap;

    while(t--)
    {
        int a,b;
        string s;
        cin>>mp.first>>mp.second>>s;

        mymap[mp]=s;

    }
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>mp.first>>mp.second;
        cout<<mymap[mp]<<endl;
    }
}

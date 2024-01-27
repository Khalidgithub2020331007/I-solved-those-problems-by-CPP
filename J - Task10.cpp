#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mymap;

    for(int i=0;i<n-1;i++)
    {
        string substring=s.substr(i,2);
        mymap[substring]++;
    }
    string ms;
    int m=0;
    for (auto & [key,value]: mymap)
    {
        if (m<value)
        {
            ms=key;
            m=value;
        }
    }
    cout<<ms<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    map<string,int>myMap;
    while(t--)
        {
            string a;
            cin>>a;
            myMap[a]++;
            if (myMap[a]==1)
            cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }

}

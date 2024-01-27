#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a[t];
    set<int>mySet;
    for (int i=0;i<t;i++)
    {
        int b;
         cin>>b;
         mySet.insert(b);

    }
    if (mySet.size()==1)
        cout<<"NO"<<endl;
    else
    {
        int i=0;
        for (auto & it :mySet)

        {
            i++;
        if (i==2)
        {
            cout<<it<<endl;
            break;
        }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>myset;
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
        cin>>a>>b;
        if (a==1)
        {
            myset.insert(b);
        }
        else if(a==2)
        {
            auto it=myset.find(b);
            if (it!=myset.end())
            {
                myset.erase(it);
            }
        }
        else
        {
            auto it=myset.find(b);
            if (it != myset.end())
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

        }

    }
}

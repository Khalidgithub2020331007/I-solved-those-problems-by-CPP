#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int coutn;
    cin>>n;
    while(n--)
    {

        int a,b;
        cin>>a>>b;
        multimap<int ,string >mymultimap;
        while(b--)
        {
            string s;
            cin>>s;
            int c=0;
            for(int i=0;i<s.length();i++)
            {
                for(int j=i+1;j<s.length();j++)
                {
                    if (s[i]>s[j])
                        c++;
                }
            }
            mymultimap.insert(make_pair(c,s));
        }
        for(const auto & pair:mymultimap)
        {
            cout<<pair.second<<endl;
        }
        if(n!=0)
            cout<<endl;

    }
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f=0,i;
    for(i=1;i<s.length();i++)
        if(s[i]>='a'&&s[i]<='z')
    {
        f=1;
        break;
    }
    //cout<<s;
    if(f)

    {
         cout<<s;
    }
    else
    {


        for(i=0;i<s.length();i++)
        {
            if(s[i]<='z'&&s[i]>='a')
            s[i]+='A'-'a';
            else
            s[i]+='a'-'A';
            cout<<s[i];
        }
    }
    return 0;
}

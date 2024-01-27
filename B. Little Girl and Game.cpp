#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,a[27];
    for(i=0;i<=26;i++)a[i]=0;
    for(i=0;i<s.length();i++)
    {

        int n;
        n=s[i]-'a';
        a[n]++;
    }
    if(s.length()%2)
    {
        cout<<"Odd"<<endl;
         int b;
        b=0;
        for(i=0;i<26;i++)if(a[i]%2)b++;
        if(b!=1)cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
    else {
            cout<<"Even"<<endl;

                    int b;
        b=0;
        for(i=0;i<26;i++)
        {
            if(a[i]%2)
            {
                b=1;
                cout<<"Second"<<endl;
                break;
            }
        }
        if(!b)cout<<"First"<<endl;
    }
}

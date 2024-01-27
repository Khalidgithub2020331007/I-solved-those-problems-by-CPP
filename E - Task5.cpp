#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {

        string s;
        cin>>s;
        stack<char>ss;
        bool d=true;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]=='{' or s[i]=='[' or s[i]=='(')
            ss.push(s[i]);
            else
            {
                if (ss.empty())
                {
                    d=false;
                    break;
                }

                char c;
                c=ss.top();
                ss.pop();
                if((s[i]==')' && c!='(')||(s[i]=='}' && c!='{')||(s[i]==']' && c!='['))
                {
//                    cout<<c<<" "<<s[i]<<endl;
                    d=false;
                    break;
                }
            }


        }
        if(d)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

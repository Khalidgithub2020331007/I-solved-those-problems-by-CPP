#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int j;

    for(j=1;j<=t;j++)
    {
        string s;
        int i,d,b=0;
        d=0;
        int f=0;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='(')
             d++;
            else if(s[i]==')') d--;
            else if(s[i]=='?')
            {
                b++;
                if(b%2==0&&d<(-b))
                {
                                    cout<<d<<" "<<b<<endl;

                         f=1;
                    break;

                }
            }
            if(d<0&&d<(-b))
            {
                f=1;
                cout<<d<<" "<<b<<endl;

                break;

            }
                if(b%2==0&&d<0)
                {
                                    cout<<d<<" "<<b<<endl;

                         f=1;
                    break;

                }





        }
cout<<j<<endl;
        if(f||(b%2!=0)) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        s.clear();
    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t;
    cin>>t;
    int k=0;
    while(t--)
    {
//        k++;
//        cout<<k<<endl;
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        if(a%2==1&&b%2==1)
        {
            cout<<-1<<endl;
            continue;
        }
        int d=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0')a--;
            else if(s[i]=='1')b--;
            if((s[i]=='0'&&s[s.length()-i-1]=='1')||(s[i]=='1'&&s[s.length()-i-1]=='0'))
            {
                d=1;
                break;
            }
        }
        if(d)
        {
            cout<<-1<<endl;
            continue;
        }
        if(a<0||b<0)
        {
            cout<<-1<<endl;
            continue;
        }
//        if(a<b)
//        {
//             if(b%2==1&&s.length()%2==1&&s[s.length()/2]=='?')
//
//        {
//
//            b--;
//            s[s.length()/2]='1';
//        }
//        }
//        if(a>=b)
//
//        if(a%2==1&&s.length()%2==1&&s[s.length()/2]=='?')
//
//        {
//
//            a--;
//            s[s.length()/2]='0';
//        }


        for(int i=0;i<s.length();i++)
        {
          //  cout<<1<<" "<<s[i]<<"  "<<s[s.length()-i-1]<< "a  "<<a<<"  b  "<<b<<endl;
            if(s[i]=='?'&&s[s.length()-i-1]=='?'&&a>=2)
            {
                a--;
                a--;
                s[i]='0';
                s[s.length()-i-1]='0';

            }
            else if(s[i]=='?'&&s[s.length()-i-1]=='?'&&b>=2)
            {
                b--;
                b--;
                s[i]='1';
                s[s.length()-i-1]='1';

            }


            else if(s[i]=='0'&&s[s.length()-i-1]=='?'&&a>=1)
            {

                a--;

                s[s.length()-i-1]='0';

            }  else if(s[i]=='?'&&s[s.length()-i-1]=='0'&&a>=1)
            {

                a--;

                s[i]='0';

            }
            else if(s[i]=='1'&&s[s.length()-i-1]=='?'&&b>=1)
            {
                b--;

                s[s.length()-i-1]='1';

            } else if(s[i]=='?'&&s[s.length()-i-1]=='1'&&b>=1)
            {
                b--;

                s[i]='1';

            }
             //cout<<2<<"  "<<s[i]<<"  "<<s[s.length()-i-1]<< "a  "<<a<<"  b  "<<b<<endl;
        }
        if(a!=0)
        {
            if(s[s.length()/2]=='?')
                s[s.length()/2]='0';
        }
        if(b!=0)
        {
            if(s[s.length()/2]=='?')
                s[s.length()/2]='1';
        }
        for(int i=0;i<s.length();i++)
        {
            cout<<s[i];

        }cout<<endl;
       // cout<<"a  "<<a<<"  b  "<<b<<endl;




    }
}

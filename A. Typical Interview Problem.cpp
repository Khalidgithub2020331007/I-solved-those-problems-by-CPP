#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,m,k,j,l,d;
    char s1[2049];
    l=0;
    for(i=1;;i++)
    {
        if(i%3==0&&i%5==0)
        {
            s1[l++]='F';
            s1[l++]='B';
        }
        else if(i%3==0) s1[l++]='F';
        else if(i%5==0) s1[l++]='B';

        if(l==2048)
            break;
    }
cout<<s1<<endl;
 //   cout<<i;
    cin>>t;
    while(t--)
    {

        cin>>n;
      string s;
        cin>>s;

       // cout<<s<<endl;

        for(i=0;i<2048;i++)
        {
 //cout<<s[0]<<endl;

            if(s1[i]==s[0])
            {
                // cout<<"foo"<<endl;
                   d=0;

                for( j=0;j<s.length();j++)
                {
                    if(s1[i+j]!=s[j])
                    {
                        break;
                    }

                    if(j==(s.length()-1)&&s1[i+j]==s[j])
                    {
                        d=1;
                    }


                }
                if(d) break;
            }
        }
        if(d) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }
    return 0;
}

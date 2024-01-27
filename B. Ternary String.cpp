#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int i,a=0,b=0,c=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')a++;
           else if(s[i]=='2')b++;
           else if(s[i]=='3')c++;

        }
        int mi,ma;
        if(a==0||b==0||c==0)
        {
            cout<<0<<endl;
            continue;
        }
        a=b=c=0;
        int d=INT_MAX;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')a=i+1;
            else if(s[i]=='2')b=i+1;
                else if(s[i]=='3')c=i+1;
            if(a!=0&&b!=0&&c!=0)
            {
                mi=min(a,b);
                ma=max(a,b);
                mi=min(mi,c);
                ma=max(ma,c);
                d=min(ma-mi+1,d);
                if(a==mi)a=0;
                else if(b==mi)b=0;
                else if(c==mi)c=0;

            }
        }
        cout<<d<<endl;

    }
    return 0;
}

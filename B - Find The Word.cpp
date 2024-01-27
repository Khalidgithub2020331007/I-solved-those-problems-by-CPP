#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n,j,k,l,d,m;
    cin>>t;
    char s[1000],ss[1000];

    for(k=0;k<t;k++)
    {
        cin>>s>>ss;
        n=strlen(s);
        m=strlen(ss);

        for(i=0;i<n-m;i++)
        {
               d=0;
            if(ss[0]==s[i])
            {
                for(j=0;j<m;j++)
                {
                    if(ss[j]!=s[i+j])
                    {
                        d=1;
                        break;

                    }

                }
                if(!d)
                {
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}

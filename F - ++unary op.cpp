#include<iostream>
#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main()
{
    int n,m,i,j,k,d,e,l;
    char s[100000],c;
    int a[100000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Case "<<i+1<<":\n";
        cin>>s;
        l=strlen(s);
        for(k=0;k<l;k++)
        {
            a[k]=s[k]-'0';

        }

        cin>>m;
        for(j=0;j<m;j++)
        {
             cin>>c;
        if(c=='I')
        {


            cin>>d>>e;
            for(k=d-1;k<e;k++)
            {
                if(a[k]==0)
                {
                    a[k]=1;
                }

                else if(a[k]==1)
                {
                    a[k]=0;
                }
            }

        }
        if(c=='Q')
        {
            cin>>d;
            cout<<a[d-1]<<endl;

        }
        }

    }
    return 0;
}

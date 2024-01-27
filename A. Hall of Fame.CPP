#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,i,j,r,k,l;
    char s[100005];
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>s;
        r=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='R')
            {
                r++;
            }
        }
        if(r==n||r==0)
            cout<<-1<<endl;
         else if(s[0]=='L'&&r==n-1)
            cout<<1<<endl;
            else cout<<0<<endl;

    }
}

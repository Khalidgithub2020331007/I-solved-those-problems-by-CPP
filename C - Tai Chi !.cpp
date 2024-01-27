#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,d,j,l;
    cin>>t;
    char s[1000];
    for(j=0;j<t;j++)
    {
        cin>>s;
        d=1;
        l=0;
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]=='6')
                l++;
            else l--;
            if(l<0) d=0;
        }
        if(d==0||l!=0) cout<<"Save us :("<<endl;
        else cout<<"Yes! I did it :)"<<endl;
    }
    return 0;
}

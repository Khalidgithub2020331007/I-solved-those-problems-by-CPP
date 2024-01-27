#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[150];

    char t;
    int i;
    cin>>s;
    int l =strlen(s);
    for(i=0;i<(l/2);i++)
    {
        t=s[2*i];
        s[2*i]=s[2*i+1];
        s[2*i+1]=t;
    }
    cout<<s<<endl;
    return 0;
}

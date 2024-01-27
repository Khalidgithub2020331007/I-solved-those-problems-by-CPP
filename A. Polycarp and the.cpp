#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,l;
    char s[]="314159265358979323846264338327",s1[39];
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s1;

        for(j=0;j<strlen(s1);j++)
        {
            if(s1[j]!=s[j])
            {

                break;
            }
        }
         cout<<j<<endl;
    }
    return 0;
}

#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    char s[100],s1[100],s2[100];
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        cin>>s;
        l=strlen(s);
        for(i=0;i<l;i++)
        {
          if(s[i]=='2'&&i==0)
          {
              s1[i]='1';
              s2[i]='1';
          }
          else if(s[i]=='2')
          {
              s1[i]='2';
              s2[i]='0';
          }
          else if(s[i]=='1')
          {
              s1[i]='1';
              s2[i]='0';
          }
          else if(s[i]=='0')
          {
                s1[i]='0';
              s2[i]='0';
          }
        }
        for(i=0;i<l;i++)
        {
          cout<<s1[i];
        }
        cout<<endl;
        for(i=0;i<l;i++)
        {
          cout<<s2[i];
        }
          cout<<endl;

    }
    return 0;
}

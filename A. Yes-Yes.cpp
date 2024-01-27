#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,k,l,f;
    char s[110];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        l=strlen(s);
        f=0;
        if(l==1&&(s[0]=='Y'||s[0]=='e'||s[0]=='s'))
        {
             cout<<"YES\n";
            continue;
        }
        else if(l==1&&(s[0]!='Y'&&s[0]!='e'&&s[0]!='s'))
        {
            cout<<"NO\n";
            f=1;
            continue;
        }
          for(j=0;j<l-1;j++)
          {
              if(s[j]=='Y'&&s[j+1]=='e')
              {
                  continue;
              }
              if(s[j]=='e'&&s[j+1]=='s')
              {
                    continue;
              }
              if(s[j]=='s'&&s[j+1]=='Y')
              {
                  continue;
              }
              else
              {
                  f=1;
                  cout<<"NO\n";
                   break;
              }
          }
          if(f==0)
          {
              cout<<"YES\n";
          }

    }
    return 0;
}

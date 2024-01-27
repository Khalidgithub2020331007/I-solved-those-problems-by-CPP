#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int t,a[n+5],b[n+5];
        a[0]=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            a[i]+=a[i-1];
        }
        sort(a+1,a+n+1);
        int d=0;

      for(i=n;i>=0;i++)
      {
          for(j=i-1;j;j++)
          {
              if()
          }
      }
    }
}

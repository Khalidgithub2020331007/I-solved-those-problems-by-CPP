#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int t;
    cin>>t;
    while(t--)
    {
       long long int n,i,m;
        cin>>n>>m;
       long long int a[n+5];
        for(i=1;i<=n;i++)
            cin>>a[i];

            sort(a+1,a+n+1);


            for(i=2;i<=n;i++)
            {
                a[i]=a[i]+a[i-1];
         //       cout<<a[i]<<" ";
            }
           // cout<<endl;
          long long int d=0;
           a[0]=0;
            for(i=1;i<=n;i++)
            {
                  if((a[n]-a[i-1])/(n-i+1)>=m)
                  {
                      cout<<n-i+1<<endl;
                      d=1;
                      break;
                  }
            }
            if(!d) cout<<0<<endl;


    }

}

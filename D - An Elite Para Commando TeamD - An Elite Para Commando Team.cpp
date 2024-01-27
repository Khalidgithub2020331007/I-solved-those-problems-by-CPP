#include<iostream>
using namespace std;
int main()
{
    int t,i,n,m,k,l,d=1;

    cin>>t;
    int a[t];
    m=0;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        if(a[i]>m) m=a[i];

      //  cout<<i<<" "<<a[i]<<endl;

    }
    int b[m+5];
    for(i=0;i<=m;i++)
    {
       b[i]=0;

    }
    //cout<<a[0]<<endl;
    for(i=0;i<t;i++)
    {
      b[a[i]]++;
      //cout<<i<<" "<<
   //   b[a[i]]<<" "<<a[i]<<endl;

    }
    for(i=1;i<=m;i++)
    {

       // cout<<i<<" "<<b[i]<<endl;
    }

    for(i=1;i<=m;i++)
    {
        if(b[i]!=0&&b[i]!=i)
        {
            cout<<0<<endl;
            d=0;
            break;
        }

    }
    if(d) cout<<1<<endl;

    return 0;
}

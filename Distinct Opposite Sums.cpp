#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    int t;
    cin>>t;
    while(t--)
    {

      cin>>n;
      for(i=n/2;i>0;i--) cout<<i<<" ";
      for(i=(n/2)+1;i<=n;i++) cout<<i<<" ";
      cout<<endl;

    }
    return 0;


}


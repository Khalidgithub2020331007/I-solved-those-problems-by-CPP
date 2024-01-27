#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
      int n,i;
      cin>>n;

      int sum,j;
      int k;
      sum=0;
      j=0;
      for (i=1;i<n+1;i++)
      {
          cin>>k;
          sum=sum+k;
          if(sum==i)
            j++;

      }
      cout<<j<<endl;

  }
}

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
      int a[n+1];
      int b[n+1];
      int suma=0;
      int sumb=0;
      int j=0;
      int k;

      for (i=0;i<n;i++)
      {
            cin>>k;
            if (k==0)
            {
                suma=max(suma,j);
                j=0;
            }
            else
                j++;

      }
      suma=max(suma,j);
      j=0;

      for (i=0;i<n;i++)
      {
            cin>>k;
            if (k==0)
            {
                sumb=max(sumb,j);
                j=0;
            }
            else
                j++;

      }sumb=max(sumb,j);
      if (suma==sumb)
        cout<<"Draw"<<endl;
      else if(suma>sumb)
        cout<<"Om"<<endl;
      else
        cout<<"Addy"<<endl;
//      cout<<suma<<" "<<sumb<<endl;




  }
}

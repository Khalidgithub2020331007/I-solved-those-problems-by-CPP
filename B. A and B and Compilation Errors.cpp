#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int i,a[n],b[n],c[n];
   for(i=0;i<n;i++)cin>>a[i];
   for(i=0;i<n-1;i++)cin>>b[i];
   for(i=0;i<n-2;i++)cin>>c[i];
   sort(a,a+n);
   sort(b,b+n-1);
   sort(c,c+n-2); int d=0;
   for(i=0;i<n-1;i++)
   if(a[i]!=b[i]) {
    cout<<a[i]<<endl;
     d=1;
     break;
   }
   if(!d) cout<<a[n-1]<<endl;
   d=0;
    for(i=0;i<n-2;i++)
   if(b[i]!=c[i]) {
    cout<<b[i]<<endl;
     d=1;
     break;
   }
   if(!d)cout<<b[n-2]<<endl;
   return 0;
}

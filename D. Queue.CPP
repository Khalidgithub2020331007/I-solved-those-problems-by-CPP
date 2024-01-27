#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,j,k,l;
    for(i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
     j=0;
     int b=0;

     for(i=0;i<n;i++)
     {

         if(a[i]>=b)
         {
             j++;
             b+=a[i];
         }

     }
     cout<<j;
    return 0;
}

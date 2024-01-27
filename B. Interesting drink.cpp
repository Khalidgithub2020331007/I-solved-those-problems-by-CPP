#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int a[100009];
int bionary (int b,int i,int j)
{
    int mid=(i+j)/2;
      if(a[mid]<=b&&a[mid+1]>b) return mid+1;

      else if(b<a[mid]) bionary(b,i,mid);

      else bionary(b,mid,j);
}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b;
    sort(a,a+n);
     for(i=0;i<q;i++)
    {
        cin>>b;
        if(a[n-1]<=b)
        {
            cout<<n<<endl;
        } else if(a[0]>b) cout<<0<<endl;
        else

        cout<< bionary(b,0,n-1)<<endl;
         //cout<<a[i]<<" ";

    }

}

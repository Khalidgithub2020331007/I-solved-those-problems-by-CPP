#include<iostream>
using namespace std;
int main()
{
    int i,j,k,l,n,m;
    cin>>n>>m;
    int a[n+5],b[n+5];
    cin>>a[0];
    for(i=1;i<n;i++)
    {
        cin>>j;
        a[i]=j+a[i-1];

    }
    k=a[m-1];
    l=0;
    for(i=1;i<n-m+1;i++)
    {
       b[i]=a[i+m-1]-a[i-1];
       if(b[i]<k)
       {
           k=b[i];
           l=i;

       }

    }
    cout<<l+1;

    return 0;
}

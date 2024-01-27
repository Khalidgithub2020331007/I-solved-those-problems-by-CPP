#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m=0,k;
    cin>>n;
    long long int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    for(i=1;i<n;i++)
    {
        a[i]+=a[i-1];
    }
    for(j=n-2;j>=0;j--)b[j]+=b[j+1];
//    for(i=0;i<n;i++)cout<<a[i]<<" ";
//    cout<<endl;
//    for(i=0;i<n;i++)cout<<b[i]<<" ";
//    cout<<endl;
    for(i=0,j=n-1;i<=j;)
    {
       // cout<<1<<" "<<a[i]<<" "<<b[j]<<endl;
        if(a[i]==b[j])
        {
            m=a[i];
            i++;
        }
        else if(a[i]>b[j])
            j--;
        else i++;

       // cout<<2<<" "<<a[i]<<" "<<b[j]<<endl;
    }
    cout<<m;


}

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n+5],b[n+5],i,j,k,l,m,p;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }
    b[0]=0;
    for(i=1;i<=n;i++)
    {
         if(a[i]==1)
         {
             b[i]=b[i-1]+1;
         }
         else b[i]=b[i-1];
    }
    p=0;
    for(i=1;i<n;i++)
        for(j=i;j<=n;j++)
    {
            l=0;
        for(k=i;k<=j;k++)
        if(a[k]==0)l++;
        m=b[i-1]+l+b[n-j];
    p=max(m,p);
    }
    if(n==1&&a[1]==0){
        cout<<1<<endl;
        return 0;
    }
    cout<<p<<endl;


}

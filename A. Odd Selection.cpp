#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,i,j,k,l,odd,even;
    cin>>n>>x;
    odd=even=0;
    for(i=0;i<n;i++)
    {
        cin>>j;
        if(j%2==0)even++;
        else odd++;

    }
    int d=0;
    int a[n];
    for(i=0;i<odd;i++)a[i]=1;
    for(i=odd;i<n;i++)a[i]=2;
    for(i=0;i<=n-x;i++)
    {
        int sum=0;
        for(j=i;j<i+x;j++)
        {
            sum+=a[j];
        }
        if(sum%2==1)
        {
            cout<<"YES"<<endl;

            d=1;
           // cout<<sum<<endl;
            break;
        }
    }
    if(!d)cout<<"NO"<<endl;

}
}

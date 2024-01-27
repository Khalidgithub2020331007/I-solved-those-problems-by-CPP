#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int i;
        for(i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int j=((n-1)/2)+1;
        for(i=0;i<((n-1)/2)+1||j<n;)
        {
            if(a[i]!=a[j])
            {
                i++;
                j++;
            }
            else i++;
        }
        cout<<i<<"  "<<j<<"  "<<j-i<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int i,j;
    int m=0;
    for(i=0,j=0;j<n;)
    {
        if(a[j]-a[i]>5)i++;
        else if(a[j]-a[i]<=5)
        {
            m=max(m,j-i+1);
            j++;

        }
    }
    cout<<m<<endl;
}

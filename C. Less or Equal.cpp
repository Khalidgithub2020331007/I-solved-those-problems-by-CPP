#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    sort(a,a+n);

    if(a[m]!=a[m-1])cout<<a[m-1]<<endl;
    else cout<<-1<<endl;

}

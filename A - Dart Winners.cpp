
// Add some code
#include<iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    int a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];

    }
    sort(a,a+n);
    cout<<a[n-1]<<" "<<a[n-2]<<" "<<a[n-3]<<endl;
}

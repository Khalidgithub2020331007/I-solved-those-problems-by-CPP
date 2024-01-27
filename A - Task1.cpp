#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int t=n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    while(t--)
    {
        if (arr[t]==a+b)
        {
            cout<<t+1<<endl;
            break;
        }
    }
}

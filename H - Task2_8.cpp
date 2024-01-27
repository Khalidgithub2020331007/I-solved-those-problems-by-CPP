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
        if (n%4==0)
        cout<<n/4<<" "<<n/4<<" "<<n/4<<" "<<n/4<<endl;
        else if (n%4==1)
            cout<<(n-2)/2<<" "<<(n-2)/2+1<<" "<<1<<" "<<1<<endl;
        else if (n%4==2)
            cout<<(n-4)/2<<" "<<n/2<<" "<<1<<" "<<1<<endl;
        else if (n%4==3)
            cout<<(n-2)/2<<" "<<(n-2)/2+1<<" "<<1<<" "<<1<<endl;

    }
}

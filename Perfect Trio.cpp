#include<iostream>
using namespace std;
int main()
{
    int a[10],t,n,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(a[0]==a[1]+a[2]) cout<<"YES"<<endl;
       else if(a[1]==a[0]+a[2]) cout<<"YES"<<endl;
        else if(a[2]==a[1]+a[0]) cout<<"YES"<<endl;
        else  cout<<"NO"<<endl;
    }
    return 0;
}

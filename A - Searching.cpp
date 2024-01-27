#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,x;
    cin>>n;
    x=sqrt(n);
    if(x*x==n) cout<<"YES"<<endl;
    else cout<<"Sorry, element can't be found"<<endl;
    return 0;
}

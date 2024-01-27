#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,a,b,i,j,k;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        cout<<"Case "<<i+1<<": ";
        k=19+abs(a-b)*4+a*4;
        cout<<k<<endl;
    }
    return 0;
}

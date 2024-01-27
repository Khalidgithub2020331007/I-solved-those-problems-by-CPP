#include<iostream>
using namespace std;
int main()
{
    long long int t,n,m,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        l=0;
        if(m%(n-1)==0)
            l=-1;
        cout<<n*(m/(n-1))+(m%(n-1))+l<<endl;
    }
}

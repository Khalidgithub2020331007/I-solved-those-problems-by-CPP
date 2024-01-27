#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,m,i;
    double n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        m=ceil(n/2);
        cout<<m<<endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,i,j,a;

         cin>>t;
        a=0;
        for(i=1;i<=sqrt(t+1);i++)
        for(j=i;j*i<=t;j++)
        a++;
        cout<<a;

    return 0;
}

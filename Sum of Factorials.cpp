#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,k;
    double  a[200],n;
    a[0]=1;
    for(i=1;i<=200;i++)
    {
        a[i]=i*a[i-1];
        cout<<i<<"---"<<a[i]<<endl;
    }

}

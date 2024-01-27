#include<iostream>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    i=0;
    if(n>m)
    {
        cout<<n-m;
        return 0;
    }
    while (1)
    {
        if(n==m)
        {
            break;
        }
       if(m%2==1||n>m)
       {
           m++;
           i++;
       }
       else
       {
           m=m/2;
           i++;
       }
    }
    cout<<i;
}

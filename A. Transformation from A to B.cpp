#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,l,d;
    int a[100];
    cin>>n>>m;
    i=0;
        a[i]=m;
        i++;
        d=0;
    for(;;)
    {

        if(n==m) break;
        if(n>m)
        {
            cout<<"NO"<<endl;
            d=1;
            break;
        }

        else if(m%10==1)
        {
            m/=10;
            a[i]=m;
            i++;
        }
        else if(m%2==1)
        {
             cout<<"NO"<<endl;
             d=1;
            break;
        }
        else
        {
            m/=2;
            a[i]=m;
            i++;
        }

    }
    if(d==0)
    {
        cout<<"YES"<<endl<<i<<endl;
        for(j=i-1;j>=0;j--)  cout<<a[j]<<" ";
    }
    return 0;


}

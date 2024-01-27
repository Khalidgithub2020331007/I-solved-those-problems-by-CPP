
#include<iostream>
using namespace std;
int a[200];
int main()
{
    int b,c,d,t,n,i,j,k,m;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        m=0;
        for(i=0;i<n;i++)
        {
            cin>>b;
            a[b]++;
            if(b>m)
            {
                m=b;
            }
        }
        d=0;
        for(i=0;i<=m;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<"NO"<<endl;
                d=1;
                break;
            }
        }
        if(d==0)
            cout<<"YES"<<endl;
         for(i=0;i<=m;i++)
        {
           a[i]=0;
        }

    }
    return 0;
}

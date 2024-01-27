#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,k,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if((n<m&&n%2!=0)||((n%2!=0&&m%2==0))||())
            cout<<"NO"<<endl;

        else
        {
            if(n<m)
            {
                for(j=1;j*2<=n;j++)
                {
                    cout<<2<<" ";
                }
                 for(j=n/2;j<m;j++)
                {
                    cout<<0<<" ";
                }
                cout<<endl;

            }
            else
            {
                if(n%2!=0&&m%2!=0)
                {
                     for(j=1;j<m;j++)
                {
                    cout<<1<<" ";
                }
                 cout<<n-m+1;
                cout<<endl;
                }
            }
        }

    }
    return 0;
}

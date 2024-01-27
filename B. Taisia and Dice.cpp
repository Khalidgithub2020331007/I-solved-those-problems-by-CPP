#include<iostream>
using namespace std;
int main()
{
    int t,s,r,i,k,j,n,m,l;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cout<<k+1<<endl;
        cin>>n>>s>>r;
        cout<<s-r<<" ";

        if(r%(n-1)==0)
        {
            for(i=0;i<n-1;i++)
            {
                cout<<r/(n-1)<<" ";
            }
            cout<<endl;
        }
        else
        {
            n--;
            m=n;
            r--;
            for(i=0;i<n-1;i++)
            {
                cout<<r/m<<" ";
                r-=r/m;
                m--;
            }
            cout<<r+1;
            cout<<endl;
        }

    }
}

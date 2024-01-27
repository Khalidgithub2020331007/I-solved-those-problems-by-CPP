#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if(n<m||(m*2>n&&n%2==0&&m%2!=0)) cout<<"NO"<<endl;

        else if((n-m+1)%2!=0)
        {
            cout<<"YES"<<endl;
            for(j=1;j<m;j++)
                cout<<1<<" ";

            cout<<n-m+1<<endl;
        }

        else if(n-((m-1)*2)>0&&(n-((m-1)*2))%2==0)
        {
            cout<<"YES"<<endl;
            for(j=1;j<m;j++) cout<<2<<" ";

            cout<<n-(m*2)+2<<endl;
        }

          else cout<<"NO"<<endl;

    }
    return 0;
}

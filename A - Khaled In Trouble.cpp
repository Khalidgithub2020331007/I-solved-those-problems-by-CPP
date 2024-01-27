#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l,m;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n;
        m=0;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>m) m=a[i];
        }
        for(i=0;i<n;i++)
        {
            l=0;
            for(j=0;j<n;j++)
            {
               if(a[j]>a[i]) l+=a[j];
            }
            if(a[i]==m)
            {
                cout<<-1<<" ";
                continue;
            }
            cout<<l<<" ";




        }
        cout<<endl;
    }
    return 0;
}

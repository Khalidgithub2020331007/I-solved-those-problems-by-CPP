#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        int a[n];
        l=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]!=5&&a[i]!=0&&a[i]!=10) l++;

        }
        if(l==0) cout<<-1<<endl;
        else cout<<l<<endl;

        for(i=0;i<n;i++)
        {
            if(a[i]>0&&a[i]<5) cout<<5<<" ";
            else if(a[i]>5&&a[i]<10) cout<<0<<" ";
            else if(a[i]>10) cout<<10<<" ";
            else cout<<a[i]<<" ";

        }
        cout<<endl;
    }
    return 0;
}

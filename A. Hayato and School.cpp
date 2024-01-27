#include<iostream>
using namespace std;
int main()
{
    int t,i,j,k,l,n,m;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        int a[n],b[n],c[n];
        k=-1;
        l=-1;

        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2!=0)
            {
                k++;
                b[k]=i+1;
            }
            else
            {
                l++;
                c[l]=i+1;
            }

        }
        if(k>=2) cout<<"YES"<<endl<<b[0]<<" "<<b[1]<<" "<<b[2]<<endl;
        else if(l>=1&&k>=1) cout<<"YES"<<endl<<c[0]<<" "<<c[1]<<" "<<b[0]<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}

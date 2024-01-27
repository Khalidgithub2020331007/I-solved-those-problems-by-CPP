#include<iostream>
using namespace std;
int main()
{
    int t,n,m,i,j,k,d;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        d=0;
        int a[n];

        for(j=0;j<n;j++)
        {
            cin>>a[j];

        }
//         for(j=0;j<n;j++)
//        {
//            cout<<a[j];
//
//        }

        for(j=0;j<n-1;j++)
        {
           for(k=j+1;k<n;k++)
           {
               if(a[j]>a[k])
               {
//                   cout<<a[j]<<" "<<a[k]<<endl;
                   d++;
               }
           }

        }

//   cout<<d<<endl;

        if(d>m) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}

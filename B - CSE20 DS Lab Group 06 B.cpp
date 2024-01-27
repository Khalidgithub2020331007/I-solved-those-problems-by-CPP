#include<iostream>
using namespace std;
int main()
{
    int t ,n,i,k,j,d,m;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        int a[n];
        for(j=0;j<n;j++) cin>>a[j];
        d=0,m=0;
                for(j=0;j<n-1;j++)
                {
                    if((a[j]<0&&a[j+1]<0)||(a[j]>=0&&a[j+1]>=0))
                    {
                        d++;
                    }
                    else
                        {
                            m=max(m,d);
                    d=0;
                        }
//                        cout<<d<< " "<<m<<endl;
                }
                m=max(m,d);
                cout<<m+1<<endl;


    }
}

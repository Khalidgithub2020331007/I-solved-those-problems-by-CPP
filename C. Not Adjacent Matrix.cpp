#include<iostream>

using namespace std;
int main()
{
    int k,i,j,n,t,m,l;
    cin>>t;
    for(k=0;k<t;k++)
    {
        l=1;
        cin>>n;
        if(n==2)
        {
            cout<<"-1\n";
            continue;
        }
        int a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                a[i][j]=l;
                l++;
            }
        }

       for(i=0;i<n-1;i++)
        {
            for(j=0;j<n;j++)
            {
               if(j%2!=0)
               {
                   a[i][j]=a[i][j]^a[i+1][j];
                   a[i+1][j]=a[i][j]^a[i+1][j];
                   a[i][j]=a[i][j]^a[i+1][j];
               }
            }
        }
         for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n>>m;
    int a[n][m];
    char c;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        cin>>a[i][j];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0)
                cout<<".";
            else {
                c='A'+a[i][j]-1;
                cout<<c;
            }
        }
        cout<<endl;
    }

}


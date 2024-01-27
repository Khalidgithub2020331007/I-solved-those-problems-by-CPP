#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int k=0;

    while(1)
    {
        k++;
        cin>>n>>m;
        char s[n+5][m+5] ;
        int a[n+5][m+5];
        int i,j;
        if(n==0&&m==0) break;

         for(i=1;i<=n;i++)
            for(j=1;j<=m;j++)
            {
             cin>>s[i][j];
             a[i][j]=0;
            }


        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {

                if(s[i][j]=='*')
                {
                    a[i-1][j]++;
                    a[i+1][j]++;
                    a[i][j-1]++;
                    a[i][j+1]++;
                    a[i-1][j-1]++;
                    a[i-1][j+1]++;
                    a[i+1][j-1]++;
                    a[i+1][j+1]++;
                }
            }

        }
         cout<<endl;
        cout<<"Field #"<<k<<":"<<endl;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(s[i][j]=='*') cout<<s[i][j];
                else cout<<a[i][j];
            }
            cout<<endl;
        }
       

    }

}

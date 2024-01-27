#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int j=0,mi=-1;
        int x,sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum+=x;
            if(sum%m==0&&j>1)
            {
                mi=max(mi,j);
                j=1;
                sum=x;
                cout<<"MI:"<<mi<<endl;
            }
            else if(sum%m==0)
            {
                j=1;
                sum=x;
            }
            else j++;
        }
        if(j>1)
        mi=max(mi,j);

        cout<<mi<<endl;

    }
    return 0;
}
/*
5
1 3
9
1 4
7
1 1
0
5 10000
10000 5000 5000 10000 0
8 2
0 1 0 1 0 1 0 1
*/

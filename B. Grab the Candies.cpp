#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int i,x,m=0,b=0;
            for(i=0;i<n;i++)
            {
                cin>>x;
                if(x%2==0)m+=x;
                else b+=x;
            }
            if(m>b) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        return 0;
}

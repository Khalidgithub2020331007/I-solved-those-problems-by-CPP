#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>s;
    int t;
    cin>>t;

    while(t--)
    {
        int n,m,i,j,k,l,d;
        cin>>n>>m;
        int a[n];
        for(i=0;i<n;i++)
        {
            a[i]=-1;
        }
        k=0;
        d=n;
        for(i=0;i<m;i++)
        {
            cin>>l;
            s.insert(l);
            //cout<<k<<" "<<s.size()<<endl;
            if(k!=s.size())
            {
                k++;
                a[--n]=i+1;;
            }
        }
        for(i=0;i<d;i++)
            cout<<a[i]<<" ";
            cout<<endl;
            s.clear();


    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    set<int>s;
    map<int,int>m;
    int t;
    cin>>t;

    while(t--)
    {

        int n,i,x,d=1;
         cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
            m[x]++;

        }



        if(n%2==0)
        {
             for(auto it:s)
        {
            x=it;
          //  cout<<"x--"<<x<<"  m[x]--"<<m[x]<<endl;
            if(m[it]>(n/2))
            {
                d=0;
                cout<<"NO"<<endl;
               // cout<<m[x]<<endl;
                break;
            }
        }
        }
        else
        {
            for(auto it:s)
        {
            x=it;
          //   cout<<"x--"<<x<<"  m[x]--"<<m[x]<<endl;
            if(m[x]>(n/2)+1)
            {
                d=0;
                cout<<"NO"<<endl;
                break;
            }
        }
        }
        if(d) cout<<"YES"<<endl;
        s.clear();
        m.clear();


    }

    return 0;
}

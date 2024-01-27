#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1[20005],v2[20002];
    set<int>s;
    int n,m;
    while(1)
    {
         cin>>n>>m;
         int c[n];
         if(n==0&&m==0) break;
        int a,b;
    int mi=INT_MAX;
    for(int i=0;i<n;i++)
     {
        cin>>c[i];
        b=c[i]%m;
        mi=min(b,mi);


     }
     cout<<mi<<endl;
     for(int i=0;i<n;i++)
     {
         a=c[i];

        b=a%m;
        b+=abs(mi);
        s.insert(b);
        if(a%2==0)
        {
          v2[b].push_back(a);
        }
        else
        {
            v1[b].push_back(a);
        }

     }
//     cout<<n<<" "<<m<<endl;
//    for(auto it:s) cout<<it<<" ";
//     cout<<endl;
     for(auto it:s)
     {
         a=it; //cout<<a<<" ";
        // cout<<"size before clear"<<v1[a].size()<<endl;


         if(v1[a].size()>0)
         {
              sort(v1[a].begin(),v1[a].end(),greater<int>());
              for(auto x:v1[a]) cout<<x<<endl;

         }

         v1[a].clear();
         //  cout<<"size after clear:"<<v1[a].size()<<endl;

        // cout<<"size before clear"<<v2[a].size()<<endl;

         if(v2[a].size()>0)
         {
             sort(v2[a].begin(),v2[a].end());

             for(auto x:v2[a]) cout<<x<<endl;
         }
         v2[a].clear();
        //  cout<<"size after clear:"<<v2[a].size()<<endl;



     }
//     v1.clear();
//     v2.clear();
     s.clear();
    }

}
/*
4 2
-2000000000
-2000000001
2000000000
2000000001
0 0
*/

#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>g[100];
vector<int>dis,parent;
vector<bool>b;
int v1,e;
int cost;
int u,v,w;
void mst(int source)
{
    for(int i=0;i<v1+5;i++)
        dis[i]=2000000;

    set<vector<int>>s;
    dis[0]=0;
    s.insert({0,source});
    while(!s.empty())
    {

        auto x=*(s.begin());
        b[x[1]]=true;
        u=x[1];
       v=parent[x[1]];
       w=x[0];
       s.erase(x);
       cost+=w;
       for(auto it:g[x[1]])
       {
          if(b[it[0]]) continue;
          if(dis[it[0]]>it[1])
          {
              s.erase({dis[it[0]],it[0]});
              dis[it[0]]=it[1];
              s.insert({dis[it[0]],it[0]});
              parent[it[0]]=x[1];

          }
       }
    }
}
int main()
{

    int i,j;
   cin>>v1>>e;
    for(i=0;i<e;i++)
    {
int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    mst(0);
    cout<<cost;


}
/*
3 3
1 2 3
2 3 4
3 4 5
*/

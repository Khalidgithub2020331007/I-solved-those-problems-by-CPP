#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[250];
 int  level[150];
int start,target;

void bfs()
{
    queue<int>q;
    int v,d=0;
    q.push(start);
    level[start]=0;
    while(!q.empty())
    {
        int v=q.front();

 q.pop();

        if(v==target)
        {
            cout<<level[v];
            d=1;
            break;
        }

        for(auto u:adj[v])
        {
            if(level[u]==-1)
            {
                level[u]=level[v]+1;
                 q.push(u);
            }
        }

    }
    if(d==0)
    {
        cout<<-1;
    }
}
int main()
{
    int n,m,i,j,k,l,e,n1,n2;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {

        cin>>n1>>n2;
        adj[n1].push_back(n2);
        adj[n2].push_back(n1);

    }
    memset(level,-1,sizeof(level));
    cin>>start>>target;
    bfs();
    return 0;
}

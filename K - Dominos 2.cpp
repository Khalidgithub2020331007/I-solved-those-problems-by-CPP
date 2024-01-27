
#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100005];
int vis[100005];
stack<int>mystack;
void d(int x)
{
    vis[x]=1;
    for(auto y:adj[x])
    {
        if(!vis[y])
            d(y);
    }
    mystack.push(x);
}
void dfs(int u)
{
    vis[u]=1;
    for(auto v:adj[u])
    {
        if(!vis[v])
            dfs(v);
    }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        for(int i=0;i<100005;i++)
            adj[i].clear();
        memset(vis,0,sizeof(vis));
        while(!mystack.empty())
            mystack.pop();
        int n,m;
        cin>>n>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
        }
        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
                d(i);
        }
        memset(vis,0,sizeof(vis));
        int cnt =0;
        while(!mystack.empty())
        {
            int x=mystack.top();
            mystack.pop();
            if(!vis[x])
            {
                dfs(x);
                cnt++;
            }


        }
        cout<<cnt<<endl;
    }
}


/*
1
3 2
1 2
2 3
*/

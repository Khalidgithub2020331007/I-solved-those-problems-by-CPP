#include<bits/stdc++.h>
using namespace std;
vector<int>prime[1001];
bool vis[1001];
int d(int u,int v)
{
    int dis[1001];
    memset(dis,-1,sizeof(dis));
    dis[u]=0;
    queue<int>q;
    q.push(u);
    int f,l;
    while(!q.empty())
    {
        f=q.front();
        q.pop();
        for(int i=0;i<prime[f].size();i++)
        {

            l=f+prime[f][i];
            if (l<=v&&dis[l]==-1)
            {
                q.push(l);
                dis[l]=dis[f]+1;
                if(l==v)
                    return dis[v];
            }
        }
    }
    return dis[v];
}
void p(int n)
{

    int i=n;
    int d=2;
    int a=0;
    while(n>1)
    {
        a=0;
        while(n%d==0)
        {
            a=d;
            n/=d;
        }
        d+=1;
        if(a)
        {
            prime[i].push_back(a);
        }
        if (a==i)
            prime[i].clear();
    }
}
int main()
{
  for(int i=2;i<=1001;i++)
  {
      p(i);
  }
  int t,a,c=0;
  cin>>t;
  while(t--)
  {
      c++;
      int x,y;
      cin>>x>>y;
      a=d(x,y);
      cout<<"Case "<<c<<": "<<a<<endl;
  }
}

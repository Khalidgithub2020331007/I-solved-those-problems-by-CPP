#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,j,k,l,u,n,e,n1,n2,d=0;
  cin>>n>>e>>k;
  vector<int>adj[n+5];
  int level[n+5];
  memset(level,-1,sizeof(level));

  for(i=0;i<e;i++)
  {

      cin>>n1>>n2;

      adj[n1].push_back(n2);
      adj[n2].push_back(n1);
  }

  queue<int>q;
  q.push(1);
 level[1]=0;

  while(!q.empty())
  {
      u=q.front();
      q.pop();

      if(k==adj[u].size())
      {
          cout<<"\npossible\n";
          d=1;
          break;
      }
      for(auto v:adj[u])
      {
          if(level[v]==-1)
          {
              level[v]=level[u]+1;
              q.push(v);

          }
      }
  }
  if(d==0)
  {
      cout<<"impossible";
  }

  return 0;
}


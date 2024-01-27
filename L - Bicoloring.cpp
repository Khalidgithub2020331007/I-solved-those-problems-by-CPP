
#include<bits/stdc++.h>
using namespace std;
#define debug  cout<<"Khalid"<<endl;



int main()
{
int m=0;
  while(true)
  {
      m++;
      cout<<m<<"-----"<<endl;
    int n,l;
  cin>>n;
  bool d=true;
  if (n==0)
  {
      break;

  }
  int vis[n];

  cin>>l;
  for(int i=0;i<n;i++)
  vis[i]=-1;
  vector<int> adj[n];

  for(int i=0;i<l;i++)
  {
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);


  }
    queue<int>q;
  q.push(0);
  vis[0]=0;

  while(!q.empty())
  {
    int node=q.front();
    q.pop();

    vector<int>:: iterator it;

    for(it=adj[node].begin();it!=adj[node].end();it++)
    {
        if(vis[*it]==-1)
        {
            vis[*it]=1-vis[node];
            q.push(*it);
        }
        else if(vis[*it]==vis[node])
        {
            d=false;
            break;
        }
    }
    if(!d)
    break;



  }
  if(d)
  cout<<"BICOLORABLE."<<endl;
  else
  cout<<"NOT BICOLORABLE."<<endl;




  }
}

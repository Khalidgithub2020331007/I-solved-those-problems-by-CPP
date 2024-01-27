#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int colour[100009],sum,m;
vector<int>v[100009];
void bfs()
{
    queue<int>q;
    q.push(1);
    while(!q.empty())
    {
         int u=q.front();
        q.pop();
        colour[u]=2;
        for(auto a:v[u])
        {
            if(colour[a]==0)
            {
                sum++;
                q.push(a);
            }
            else if(m>1&&colour[a]==1)
            {
                    m--;
                     if(colour[a]==0)
                     {
                      sum++;
                      q.push(a);
                      }

            }

        }
    }


}
int main()
{
   int n,i,j,k,l,a,b;
   cin>>n>>m;
   for(i=1;i<=n;i++) cin>>colour[i];

    for(i=1;i<n;i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
    }
    bfs();
    cout<<sum;
    return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<double>pq;
   double t,n,k,i,j,l,m;

    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n>>k;
        for(j=0;j<n;j++)
        {
            cin>>m;
            pq.push(m);

        }
        m=0;
        for(j=0;j<k;j++)
        {
            n=floor(pq.top()/2);
           m=m+n;
           n=pq.top()-n;
          pq.pop();
           pq.push(n);

   cout<<m<<" "<<n<<endl;


        }
        cout<<m<<endl;

    }
    return 0;
}

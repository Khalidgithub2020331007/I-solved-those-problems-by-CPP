#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int qu,st,pq,n,a,b,c,i;
    priority_queue<int>p;
    queue<int>q;
    stack<int>s;
    while(scanf("%d",&n)!=EOF)
    {
        qu=0;
        st=0;
        pq=0;
        for(i=0;i<n;i++)
        {
            cin>>a>>b;
            if(a==1)
            {
                if(qu==0)
                {
                    q.push(b);
                }
                if(st==0)
                {
                    s.push(b);
                }
                if(pq==0)
                {
                    p.push(b);
                }
            }
            if(a==2)
            {

                 if(qu==0)
                {
                    if(q.empty()||q.front()!=b)
                    {
                        qu=1;
                    }
                    else
                    q.pop();
                }
                 if(st==0)
                {


                    if(s.empty()||s.top()!=b)
                    {
                        st=1;
                    }
                    else
                     s.pop();
                }
                if(pq==0)
                {
                    if(p.empty()||p.top()!=b)
                    {
                        pq=1;
                    }
                    else
                    p.pop();
                }
            }
        }
       if((st==0&&qu==0)||(pq==0&&st==0)||(pq==0&&qu==0))
        {
            cout<<"not sure"<<endl;
        }
        else if(st==0)
        {
            cout<<"stack"<<endl;
        }
        else if(qu==0)
        {
            cout<<"queue"<<endl;
        }
        else if(pq==0)
        {
            cout<<"priority queue"<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
        while(!s.empty())
        {
            s.pop();
        }
   while(!p.empty())
        {
            p.pop();
        }
   while(!q.empty())
        {
            q.pop();
        }

    }

    return 0;
}

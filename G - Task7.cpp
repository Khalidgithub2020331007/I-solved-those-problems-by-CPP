#include<bits/stdc++.h>
using namespace std;
bool myfun(pair<int,int>a,pair<int,int>b)
{
    if (a.first<b.first)
        return true;
    else if(a.first==b.first)
    {
        if (b.second<a.second)
            return true;
            else
            return false;
    }
    else
        return false;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        vector<pair<int,int>>v;
        for (i=0;i<n;i++)
        {
            int a,b;
            scanf("%d",&a);
            scanf("%d",&b);
            v.push_back(make_pair(a,b));

        }
        sort(v.begin(),v.end(),myfun);
        for(i=0;i<n;i++)
        {
            printf("%d %d\n",v[i].first,v[i].second);
        }
    }

}

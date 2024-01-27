#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int>p[3];
    int a[3]={3,2,1};
    int b[3]={1,2,3};
    for (int i=0;i<3;i++)
    {
        p[i]={a[i],b[i]};
    }
    sort(p,p+3);
    for (int i=0;i<3;i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;


}

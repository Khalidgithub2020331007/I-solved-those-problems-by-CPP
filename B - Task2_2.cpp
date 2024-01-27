#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,w;
    cin>>n>>h>>w;
    for (int i=0;i<n;i++)
    {
        char a,b;
        cin>>a>>b;
//        cout<<h<<" "<<w<<endl;
        if (a=='Y'|| w==0)
        {
            cout<<"Y ";
            w+=1;
            h-=1;
        }
        else
            cout<<"N ";
        if (b=='Y'|| h==0)
        {
            cout<<"Y ";
            h+=1;
            w++;
        }
        else
            cout<<"N ";
        cout<<endl;

    }
}

#include<bits/stdc++.h>
using namespace std;
bool printvec(vector<int> &v)
{
//     cout<<"size: "<<v.size()<<endl;
int m=v.size();
         set<int>s;
            for(int k=0;k<m;k++)
            {
//                cout<<v[k]<<" ";
                  s.insert(v[k]);
            }

//            cout<<endl;
            if (s.size()!=m)
                return false;
            else
                return true;




}
int main()
{
    int t;
    cin>>t;
    for (int i=1;i<=t;i++)
    {
//        cout<<"Scenario #"<<i<<": ";
        int n,m;
        cin>>n>>m;
//        cout<<n<<" "<<m<<" n and m"<<endl;
        vector<int>v[n];
        for (int j=0;j<m;j++)
        {
            int a;
            int b;
            cin>>a>>b;
            v[a-1].push_back(b);
        }

        bool d=true;
         cout<<"Scenario #"<<i<<": ";
        for (int j=0;j<n;j++)
        {
           if (printvec(v[j])==false)
           {
               d=false;
               cout<<"impossible"<<endl;
               break;
           }
        }
        if (d)
        {
            cout<<"possible"<<endl;
        }
        string s;
         getline(cin,s);
        getline(cin,s);





    }
}

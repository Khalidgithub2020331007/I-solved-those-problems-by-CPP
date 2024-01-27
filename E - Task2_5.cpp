#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a;
        cin>>a;
        map<int,int>mymap;
        set<int>myset;
        for (int j=2;j<=a;j++)
        {
//            cout<<"Khalid1"<<endl;
            int l=j;
            for(int k=2;k<=l;k++)

            {
//                cout<<"Khalid2"<<endl;
                if(l%k==0)
                {
//                    cout<<"Khalid3"<<endl;
                    myset.insert(k);
                    mymap[k]+=1;
                    l=l/k;
                    k=1;
                }
            }
        }
//        cout<<"Khalid"<<endl;
        int b=0;
        int k=myset.size();
        cout<<"Case "<<i<<": "<<a<<" = ";

         for (auto it = myset.begin(); it != myset.end(); ++it) {
                 cout << *it << " ("<<mymap[*it]<<")";

                b++;
                if (k==b)
                    cout<<endl;
                    else
                    cout<<" * ";

             }


    }

}

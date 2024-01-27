#include<bits/stdc++.h>
using namespace std;
int main()
{
  map<string,int>mymap;
  int n;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    string s;
    int a,b;
    cin>>a>>s;
   if (a==3)
   {
          int minValue = std::numeric_limits<int>::max();

    for (const auto& pair : mymap) {
        if (pair.second < minValue) {
                s=pair.first;
            minValue = pair.second;
        }
    }

          cout<<s<<" "<<i<<endl;
           mymap.erase(s);


   }
    else{
        cin>>b;
        mymap[s]=b;
    }





    }

}


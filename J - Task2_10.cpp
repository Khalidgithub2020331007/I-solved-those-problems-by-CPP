//
//#include<bits/stdc++.h>
//using namespace std;
//main()
//{
//    map<string,string>mymap;
//    int n,m;
//    cin>>n>>m;
////      char a[100],b[100];
//
//      while(n--)
//      {
//          string a,b;
//      cin>>a>>b;
////      cout<<a<< " "<<b;
//          mymap[b]=a;
//      }
////      for (const auto & item:mymap)
////      {
////          cout<<item.first<<" "<<item.second<<endl;
////      }
//      while(m--)
//      {
//          string a,b;
//          cin>>a>>b;
//
//
//
////          cin>>a>>b;
//          cout<<a<<" "<<b<<" ";
//          int n=b.length();
//          b.erase(n-1,1);
////          cout<<b<<" ";
//          cout<<"#"<<mymap[b]<<endl;
//      }
//
//
//}

#include<bits/stdc++.h>
using namespace std;
main()
{
    double n=101,m=1;
    while(n>1)
    {
//        cout<<m<<" "<<n<<endl;
        m=m*n;
        n--;

    }
    cout<<m;
}

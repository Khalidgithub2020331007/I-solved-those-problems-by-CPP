//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int n;
//    int i;
//    cin>>n;
//    int a[n];
//    int b[n];
//    for (i=0;i<n;i++)
//    {
//        cin>>a[i];
//        b[i]=a[i];
//
//    }
//    sort(b,b+n);
//    int c=b[0];
//    int d=1000000;
//    vector<int>v;
//    for(i=0;i<n;i++)
//    {
//        if (a[i]==c)
//        {
//            v.push_back(abs(i-d));
//            d=i;
//
//        }
//    }
//    sort(v.begin(),v.end());
//    cout<<v.front()<<endl;
//
//}
#include<bits/stdc++.h>
#include <set>
using namespace std;
int main() {
  std::set<int> set = {1, 2, 3, 5};

  // Add the element 6 to the set.
  set.insert(4);

  // Print the elements of the set.
  for (auto& element : set) {
    cout << element << " ";
  }
  std::cout << std::endl;

  return 0;
}

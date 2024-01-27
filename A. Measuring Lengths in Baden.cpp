#include<bits/stdc++.h>
using namespace std;
int main()
{

    double l;
    cin>>l;
    int n;
    n=l;

    l=n%36;
    l=round(l/3);

   if(l==12)cout<<(n/36)+1<<" "<<0<<endl;
   else cout<<(n/36)<<" "<<l<<endl;

}

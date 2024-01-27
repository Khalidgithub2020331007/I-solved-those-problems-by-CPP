#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool d=true;
   for(int i=0;i<=c;i++)
   {
       cout<<(c-i*a)<<" "<<(c-i*a)%b<<endl;
       if ((c-i*a)%b==0)
       {
            d=false;
            break;
       }



   }
   if (!d)
   cout<<"Yes"<<endl;
   else
    cout<<"No"<<endl;
}

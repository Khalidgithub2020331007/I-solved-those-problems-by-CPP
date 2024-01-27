#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

         if(y2<y1||((x2-x1)>(y2-y1)))
         {

             cout<<-1<<endl;
             continue;
         }
         int c=y2-y1;
         x1=x1+c;
         c=abs(c)+abs(x2-x1);
         cout<<c<<endl;

    }


}

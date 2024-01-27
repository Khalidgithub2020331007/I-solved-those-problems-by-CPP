#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long t,n,m,i,j,r,n1,n2;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>m;
        r=(-1+sqrt(1+(8*m)))/2;
        if((r*(r+1))/2==m)
        {

               for(i=n;i>0;i--)
               {
                   if(i==r||i==r+1)
                   {
                       cout<<"b";
                   }
                   else
                   {
                       cout<<"a";
                   }
               }
               cout<<endl;
        }
        else
        {
            n1=r+2;
            n2=r+1;
            r=m-((r*(r+1))/2);
                for(i=n;i>0;i--)
               {
                   if(i==r||i==n1)
                   {
                       cout<<"b";
                   }
                   else
                   {
                       cout<<"a";
                   }
               }
               cout<<endl;
        }
    }
    return 0;
}

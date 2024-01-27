#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l,m;
    long long mul1,mul,mul2,a,b,c,d,e,g,f;
    cin>>t;

        for(i=0;i<t;i++)
    {
        cin>>a>>b>>c>>d>>e;
        if(a-c<e)
       {
           g=c;
           f=b-e+a-c;

       }
       else
       {
           g=a-e;
           f=b;
       }
        mul1=g*f;

            if(b-d<e)
       {
           g=d;
           f=a-e+b-d;

       }
       else
       {
           g=b-e;
           f=a;
       }
        mul2=g*f;
        mul=mul1<mul2?mul1:mul2;
        mul=c*d>mul?c*d:mul;
        cout<<mul<<endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,j,m,d;
    long long n,k,l,i;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        m=cbrt(n+1);
        d=0;
    //    cout<<n<<endl;
        for(i=1;i<=m;i++)
        {
            k=n-(i*i*i);
            l=cbrt(k);
            if(((i*i*i)+(l*l*l)==n)&&k>0)
            {
                cout<<"YES\n";
                    d=1;
                    break;
            }

        }
        if(d==0)
        {
            cout<<"NO\n";
        }
    }
    return 0;
}

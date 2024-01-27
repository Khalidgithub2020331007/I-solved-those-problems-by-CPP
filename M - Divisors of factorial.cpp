#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int t,n,i,j,k,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        k=0;
        for(j=1;j<=sqrt(n);j++)
        {
            if(j*j==n)
            {
                k++;
//                cout<<j<<" ";
            }
            else if(n%j==0)
                {
                    k+=2;;
//                    cout<<j<<" ";
                }
        }
        cout<<k<<endl;
    }
}

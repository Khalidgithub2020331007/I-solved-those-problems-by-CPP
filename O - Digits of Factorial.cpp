#include<iostream>
#include<cmath>
using namespace std;
double l[1000010];
int main()
{
//    cout<<log2(8);
    long long int t,n,base,i,j,c;
    double sum=0,a,b;
    for(i=1;i<=1000009;i++)
    {
        l[i]=l[i-1]+log(i);
    }
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>base;


        c=l[n]/log(base);
        cout<<"Case "<<j+1<<": "<<(c+1)<<endl;
    }
    return 0;
}

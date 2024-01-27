#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,j,k,l,o;
    double n1;
    cin>>n>>m;
    int a[n];

    cin>>a[0];
    k=a[0];

    n1=((double)a[0]);
    l=ceil(n1/m);
    j=0;
    for(i=1;i<n;i++)
    {
        cin>>a[i];
        n1=((double)a[i]);
        o=ceil(n1/m);

        if(l<=o)
        {
            l=o;
            j=i;
        }

    }
    if(a[j]>m)
    {
        cout<<j+1<<endl;
    }
    else
        cout<<n<<endl;
}

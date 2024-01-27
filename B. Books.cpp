#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,l,sum;
    cin>>n>>m;
    int a[n];
    sum=0;
    k=0;
    j=0;
    l=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        if(sum<=m)
        {
            k++;

        }
        else
        {
            sum=sum-a[j];
            j++;
        }
        if(k>l)
            l=k;


    }
    cout<<l;
}

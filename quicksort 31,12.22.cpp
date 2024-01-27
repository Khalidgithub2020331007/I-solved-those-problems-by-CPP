#include<iostream>
using namespace std;
int a[100];
int partition(int l,int r)
{
    int i=l,j=l;
    while(j<r)
    {
        if(a[j]<a[r])
        {
            swap(a[i],a[j]);
            i++;
        }
        j++;

    }
    swap(a[i],a[r]);


    return i;

}
void quick(int l,int r)
{
    int j;
    if(l>=r)
    {
        return;
    }
    j=partition(l,r);

    quick(l,j-1);
    quick(j+1,r);

}
int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quick(0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
void bionary(int* a,int x,int y,int target){
    int mid=(x+y)/2;
    if(a[mid]<=target&&a[mid+1]>target)
    {

        cout<<mid+1<<endl;
        return;
    }
    if(a[mid]>=target)  bionary(a,x,mid,target);
    else bionary(a,mid,y,target);

}
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    int i;
    for(i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    //for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<endl;
    for(i=0;i<m;i++)
    {

        int x;
        cin>>x;
        int d;
        d=upper_bound(a,a+n,x)-a;
        cout<<d<<endl;
    }
}

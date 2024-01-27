#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int a[n];
    int i,j,k,sum=0,su=0;
    for(i=0;i<n;i++)cin>>a[i];
    k=0;
    for(i=0,j=n-1;;)
    {
        k++;

        if(a[i]<a[j])
        {
            if(k%2)sum+=a[j];
            else su+=a[j];
            j--;
        }
        else{
             if(k%2)sum+=a[i];
            else su+=a[i];
            i++;
        }
        if(i>j)break;
    }
    cout<<sum<<" "<<su;
}

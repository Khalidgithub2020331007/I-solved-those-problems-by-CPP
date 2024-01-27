#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    map<long long,int>m1,m2;
    long long a[100001];
    cin>>n;
    long long sum=0;
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
        m2[a[i]]++;
        sum+=a[i];
    }
    if(sum%2==1)
    {
        cout<<"NO";
        return 0;
    }
    long long p=0,r;
    for(int i=0;i<n;i++)
    {
        p+=a[i];
        r=sum/2-p;
        m1[a[i]]++;
        m2[a[i]]--;
        if(r==0||(r>0&&m2[r]>0)||(r<0 && m1[-r]>0))
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";

}

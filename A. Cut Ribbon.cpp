#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d,b,c;
    cin>>t>>d>>b>>c;

    int a[3];
    a[0]=d;
    a[1]=b;
    a[2]=c;
    sort(a,a+3);

    if(d==b&&b==c&&t==d) cout<<1;

    else if(t%a[0]==0&&a[0]!=t) cout<<t/a[0];
    else if(t%a[1]==0&&a[1]!=t) cout<<t/a[1];
    else if(t%a[2]==0&&a[2]!=t) cout<<t/a[2];


    else cout<<2;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(1)
    {

        cin>>n;
        if(n==0)
        {cout<<endl;
        break;
        }
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        sort(a,a+n);
          for(int i=0;i<n;i++)
        {
         cout<<a[i]<<" ";

        }
        cout<<endl;

    }
    return 0;

}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int i,j,c0=0,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            cin>>j;
            if(j%3==0)
                c0++;
            else if(j%3==1) c1++;
            else c2++;
        }
        i=0;
        j=n/3;
        while(1)
        {
           // cout<<"i--"<<i<<"  j---"<<j<<"  c0--"<<c0<<"   c1--"<<c1<<"   c2--"<<c2 <<endl;
            if(c0==j&&c1==j&&c2==j)
            {
                cout<<i<<endl;
                break;
            }
            if(c0<j)
            {
                c0++;
                c2--;
                i++;
            }
            if(c1<j)
            {
              c1++;
              c0--;
              i++;
            }
            if(c2<j)
            {
                c2++;
                c1--;
                i++;
            }
        }

    }
    return 0;
}

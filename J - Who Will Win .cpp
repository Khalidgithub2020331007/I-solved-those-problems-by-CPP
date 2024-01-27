#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j,k,sum1,sum2,l,l1,l2;
    cin>>t;
    for(k=0;k<t;k++)
    {
         cin>>m;
            int a[m+5];
            a[0]=0;
            cin>>a[1];
            for(i=2;i<=m;i++)
            {
                cin>>l;
                a[i]=a[i-1]+l;

            }
            cin>>m;
            sum1=0;sum2=0;
            for(i=0;i<m;i++)
            {
                cin>>l1>>l2;
                if(l1<l2)
                {
                    l1=l1^l2;
                    l2=l1^l2;
                    l1=l1^l2;
                }
                if((a[l1]-a[l2-1])%2==0)
                sum1+=abs(a[l1]-a[l2-1]);
            //    cout<<l1<<" "<<l2<<" "<<a[l1]-a[l2-1]<<endl;
            }
sum2=0;
            for(i=0;i<m;i++)
            {
                cin>>l1>>l2;
                if(l1<l2)
                {
                    l1=l1^l2;
                    l2=l1^l2;
                    l1=l1^l2;
                }
                if((a[l1]-a[l2-1])%2==0)
                sum2+=abs(a[l1]-a[l2-1]);
               // cout<<l1<<" "<<l2<<" "<<a[l1]-a[l2-1]<<endl;
            }
            //cout<<"sum1--"<<sum1<<"  sum2--"<<sum2<<endl;
            if(sum1>sum2) cout<<"Rony"<<endl;
            if(sum1<sum2) cout<<"Susmoy"<<endl;
            if(sum1==sum2) cout<<"Tied"<<endl;


    }
}

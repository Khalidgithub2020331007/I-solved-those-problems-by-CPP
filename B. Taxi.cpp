#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,i;
    cin>>n;
    int a[19];
    int x;
    for(i=0;i<=5;i++) a[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>x;
        a[x]++;

    }
    int sum=0;
    sum+=a[4];
  //  cout<<sum<<endl;
    x=a[3]>a[1]?a[1]:a[3];
    a[3]-=x;
    a[1]-=x;
    sum+=x;
    sum+=a[3];
 //   cout<<sum<<endl;
    x=a[2]/2;
    a[2]-=x*2;
    sum=sum+x;
   // cout<<sum<<endl;
     if(a[2]==1)
     {
         if(a[1]==1)
         {
             a[2]=0;
             a[1]=0;
             sum++;
         }
         else if(a[1]>=2)
         {
             a[2]=0;
             a[1]-=2;
             sum++;
         }
         else sum++;

     }


     if(a[1]!=0)
        sum+=ceil((double)a[1]/4);

     cout<<sum<<endl;


}

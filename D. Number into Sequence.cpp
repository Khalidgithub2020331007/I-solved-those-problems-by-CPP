
#include<bits/stdc++.h>
using namespace std;
#define int long long
 main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
     //   cout<<n<<endl;
        int a[100000];
        int i,j=0;
        a[0]=1;
        int x=0,y=0;
        int k;
        for(k=2;k*k<=n;k++)
        {
            j=0;
            i=k;

           while(1)
           {
               if(n%i)
               {
                   break;
               }
               j++;
               i=i*k;
             //  cout<<i<<" ";
           }
         //  cout<<endl;
           if(j>y)
           {

               x=k;
               y=j;
              //  cout<<x<<" "<<y<<endl;
           }


        }
       if(y==0&&x==0)
       {
           cout<<1<<endl<<n<<endl;
           continue;
       }
       else
       {
           cout<<y<<endl;
       }
        for(i=1;i<y;i++)
       {
           cout<<x<<" ";
           n=n/x;
       }
       cout<<n<<endl;

    }
}

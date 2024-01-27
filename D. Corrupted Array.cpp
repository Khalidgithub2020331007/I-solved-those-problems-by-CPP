
#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int t,n,i,j,k,l;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
       int b[n+2];
       long long sum=0;
       for(i=0;i<n+2;i++)
       {
           cin>>b[i];
           sum+=b[i];
       }
//       cout<<sum<<endl;
       sort(b,b+n+2);
//       for( i=0;i<n+2;i++)
//       {
//            cout<<b[i]<<" ";
//       }
//
//
//       cout<<endl;
       int d=1;
       if(sum-b[n+1]==2*b[n])
       {
//           cout<<1<<endl;

           for(i=0;i<n;i++)
           {
               cout<<b[i]<<" ";
           }
           d=0;
       }
       else
       {

           for(i=0;i<n+1;i++)
           {
               if(sum-b[i]==2*b[n+1])
               {
//                    cout<<2<<endl;
                   for(k=0;k<n+1;k++)
                   {
                       if(k==i) continue;

                       cout<<b[k]<<" ";
                   }
                   d=0;
                   break;
               }
           }
       }
       if(d) cout<<-1;

       cout<<endl;

    }

}
/*
4
3
2 3 7 12 2
4
9 1 7 1 6 5
5
18 2 2 3 2 9 2
3
2 6 9 2 1
*/

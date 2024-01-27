#include<bits/stdc++.h>
using namespace std;
#define int long long int
 main()

{
     int n;
     cin>>n;
     int i,k,l;
     int a[n],b[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         b[i]=a[i];

     }
     k=l=0;
     sort(b,b+n);
     for(i=0;i<n;i++)
        if(a[i]!=b[i])
             {
            k=i;
            break;
        }
         sort(b,b+n);
     for(i=n-1;i>=0;i--)
        if(a[i]!=b[i])
        {
            l=i;
            break;
        }

        if(k==0&&l==0)

        {
             cout<<"yes"<<endl<<1<<" "<<1;
             return 0;
        }
        int d=1,j;
 // cout<<k<<" "<<l<<endl;
            for(i=k,j=l;i<=l;i++,j--)

            {
                    if(a[i]!=b[j])
                    {
                        d=0;
                        break;
                    }
            }
            if(d)
            {
                cout<<"yes"<<endl<<k+1<<" "<<l+1<<endl;
               // for(i=k;i<=l;i++) cout<<a[i]<<" ";
            }
            else cout<<"no";


     return 0;
}
/*

40
17927221 33153935 60257083 110553879 114654567 119809916 163899753 167741765 182812464 188486743 220036903 220127072 227545828 229552200 244963635 248298934 299478582 354141058 371400641 430054473 452548736 458695269 466968129 469000714 478004472 478693873 509342093 750631027 609759323 669427158 688490225 690701652 696893030 704668825 749028408 557906039 545356441 926901326 955586118 972642992

*/

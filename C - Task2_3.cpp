#include<bits/stdc++.h>
using namespace std;
int n=10000001;
bool b[10000001];

void seive()
{
    int i,j;
    for(i=2;i*i<=n;++i)
    {
        if(!b[i])
        {


            for (j=i*i;j<=n;j+=i){
                b[j]=true;

            }

        }
    }

}
main()
{
   seive();
   int i=0;


   int t;
   cin>>t;
   for (i=0;i<t;i++)
   {

       int j,k;
       k=0;
       int l;
       cin>>l;
        for(j=2;j<=l/2;j++)
        {
            if(b[l-j]==false && b[j]==false)
            {
//                cout<<l<<" "<<j<<" "<<l-j<<endl;
                k++;
            }

        }
    cout<<"Case "<<i+1<<": ";
   cout<<k<<endl;

   }



}

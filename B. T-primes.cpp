#include<bits/stdc++.h>
using namespace std;
bool a[1000009];
void seive()
{
    int i;

    for(i=3;i*i<=1000000;i=i+2)


          if(a[i]==false)

            for(int j=i*2;j<=1000000;j=j+i)
            {
                a[j]=true;
//                cout<<j<<" ";

            }






}
int main()
{
    long long int t;
    seive();
     int i;
//     for(i=0;i<=100;i++)
//        if(!a[i]&&(i%2!=0||i==2)) cout<<i<<endl;
    cin>>t;


    while(t--)
    {
        long long int n,i;

        cin>>n;
         int x=sqrt(n);
        if(x*x==n&&n>3)
        {

            if(!a[x]&&(x%2!=0||x==2)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }

            else cout<<"NO"<<endl;
    }
}

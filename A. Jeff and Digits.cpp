#include<iostream>
using namespace std;
int main()
{
    int n,d,k,i,j,l,m;
     d=0;
    k=0;
    cin>>n;


    while(n--)
    {
        cin>>j;

        if(j==5)
            d++;
        else
            k++;


           // cout<<j<<"  "<<n<<endl;

    }
   // cout<<"d--"<<d<<"  k---"<<k<<endl;
    if(k==0||(k==0&&d/9==0))
        cout<<-1<<endl;

    else if(d/9==0)
        cout<<0<<endl;
    else
    {
        d=(d/9)*9;

        for(i=0;i<d;i++)cout<<5;
        for(i=0;i<k;i++)cout<<0;
    }
    cout<<endl;
}

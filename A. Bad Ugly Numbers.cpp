#include<iostream>
using namespace std;
int main()
{
    int t,i,n,j;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        if(n<2)  cout<<-1<<endl;


        else
        {
            cout<<2;
            for(i=0;i<n-1;i++)
                cout<<3;

            cout<<endl;
        }
    }
    return 0;
}

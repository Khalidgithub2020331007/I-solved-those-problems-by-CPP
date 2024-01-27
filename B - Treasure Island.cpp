#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k,l;
    cin>>n>>m;
    int a[n+5];
    for(i=1;i<n;i++)
    {
        cin>>a[i];
    }
//    for(i=1;i<n;i++)
//    {
//        cout<<a[i];
//    }
    i=1;
    l=0;
     for(;;)
    {
        if(i>n)
        {
            cout<<-1<<endl;
            break;

        }
        if(i==m)
        {
            cout<<l+1<<endl;
            break;
        }
        //cout<<i<<" "<<a[i]<<endl;
        i+=a[i];
        l++;
        //cout<<i<<" "<<a[i]<<" "<<l<<endl;
    }


    return 0;
}

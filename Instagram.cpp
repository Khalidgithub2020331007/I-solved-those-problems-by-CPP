#include<iostream>
using namespace std;
int main()
{
    int a,b,c ,t,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b;
        c=b*10;
        if(c<a)
        {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}


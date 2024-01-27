#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==b)
        {
            if(a%2==0)
            {
                cout<< "CHEFINA"<<endl;
            }
            else
            {
                cout<<"CHEF"<<endl;
            }
        }
        else if(a>b)  cout<<"CHEF"<<endl;
       else  cout<< "CHEFINA"<<endl;
    }
    return 0;
}

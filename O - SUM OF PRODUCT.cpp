
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n=100;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=i;j++)
        {
            sum+=(i/j)*j;
        }
        cout<<"i--"<<i<<"  sum--"<<sum<<endl;
    }
}

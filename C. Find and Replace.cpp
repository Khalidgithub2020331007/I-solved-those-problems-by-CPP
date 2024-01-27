#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int a[n];
        string s;
        cin>>s;
        int b=1;

        for(i=0;i<n;i++)a[i]=-1;
        int d=0;
        for(i=0;i<n;i++)
        {

                  for(j=i+1;j<n;j++)
                {
                    if(s[i]==s[j])
                    {
                        if(i%2!=j%2)
                        {
                            d=1;
                            break;
                        }

                    }

                }
                if(d)
                    break;
                }
                if(d)cout<<"NO"<<endl;
                else cout<<"YES"<<endl;



    }
}

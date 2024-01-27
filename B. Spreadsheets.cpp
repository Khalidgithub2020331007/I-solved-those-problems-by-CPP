#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t,i,j,k,m,n,o,p;
    double l;
    char s[1000],c;
    cin>>t;
    for(k=0;k<t;k++)
    {
        int sum=0;
        cin>>s;
        l=strlen(s);
        if(s[0]=='R')
        {
            for(j=0;j<l;j++)
            {
                if(s[j]=='C')
                {
                    m=j;
                    break;
                }
            }
            for(j=m+1;j<l;j++)
            {
                n=(int)s[j]-(int)'1'+1;
                sum=sum+n*ceil(pow(10,(l-j-1)));
            }
            cout<<sum<<endl;
            while(1)
            {

                n=sum/26;
                sum=
                if(n>0)
                {
                  c='A'+n-1;
                }

                 if(n==0&&sum==0)
                {


                    break;
                }

            }
        }
        else
            {

            }

    }
    return 0;
}

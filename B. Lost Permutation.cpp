#include<iostream>
using namespace std;
int main()
{
    int sum,i,j,k,t,m1,f,s,maxi;
    cin>>t;
    for(j=0;j<t;j++)
    {
            int m[100]={0};
            cin>>m1>>s;
            maxi=0;
            for(i=0;i<m1;i++)
            {
                cin>>k;
                if(k>maxi)
                    maxi=k;


                m[k]=1;
            }
            sum=0;
            f=0;
            for(i=1;i<=50;i++)
            {
                if(m[i]==0)
                {
                    sum+=i;
                    m[i]=1;
                    if(sum>s)
                    {
                        cout<<"NO"<<endl;
                        f=1;
                        break;
                    }
                    else if(sum==s)
                    {


                       for(k=1;k<=i||k<=maxi;k++)
                       {
                           if(m[k]==0)
                           {
                               f=1;
                               cout<<"NO"<<endl;
                               break;
                           }
                       }
                       if(f==1)
                       {
                           break;
                       }
                       if(f==0)
                       {
                           cout<<"YES"<<endl;
                           f=1;
                            break;
                       }

                    }
                }
            }
            if(f==0)
            {
                cout<<"NO\n";
            }
    }
    return 0;
}

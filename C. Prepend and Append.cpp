#include<iostream>
using namespace std;
int main()
{
    int t,n,i,j,k,l,d;
    char s[200];
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        cin>>s;
        i=0;
        n--;
        for(;;)
        {
//            if(i>n)
//            {
//                cout<<0<<"i<n"<<endl;
//                break;
//
//            }
//            else if(i==n)
//            {
//                 cout<<1<<"i==n"<<endl;
//                break;
//            }
//            else if(s[i]=='0'&&s[n]=='1')
//            {
//                i++;
//                n--;
//
//            }
//            else if(s[i]=='1'&&s[n]=='0')
//            {
//                i++;
//                n--;
//
//            }
//            else
//            {
//                cout<<n-i+1<<endl;
//                break;
//            }
              if(i>n||s[i]==s[n])
                {
                    cout<<n-i+1<<endl;
                    break;
                }

              else
              {
                  i++;
                  n--;
              }
            for(k=i;k<=n;k++)
                cout<<s[k];

            cout<<endl;


        }
    }
    return 0;

}

#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    int t,i,j,k,l,d;
    char s[100];
    cin>>t;
    for(j=0;j<t;j++)
    {


        cin>>s;
        d=0;
        k=strlen(s);
         if(k==1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        else if(k==2)
        {
            if(s[0]!=s[1])
            {
               cout<<"NO"<<endl;
            continue;
            }
        }
        else if(s[k-1]!=s[k-2])
        {
             cout<<"NO"<<endl;
            continue;
        }
        else if(s[0]!=s[1])
        {
             cout<<"NO"<<endl;
            continue;
        }
        else if(k>=3)
        {
            for(i=0;i<k-2;i++)
            {
                if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='a')
                {
                    cout<<"NO"<<endl;
            d=1;
             break;
                }
                else if(s[i]=='b'&&s[i+1]=='a'&&s[i+2]=='b')
                {
                    cout<<"NO"<<endl;
       d=1;
             break;
                }
            }
        }

        if(d==0)
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}

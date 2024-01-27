#include<iostream>
using namespace std;
int main()
{
    int t,n,j,i,k,l,d,x,y;
    cin>>t;
    char ch,s[100];

    for(j=0;j<t;j++)
    {
        x=0;
        y=0;
        cin>>n;
        d=0;
        cin>>s;
        for(i=0;i<n;i++)
        {

            if(s[i]=='U')
                y++;
            else if(s[i]=='R')
                x++;
                else if(s[i]=='L')
                x--;
                else if(s[i]=='D')
                y--;

                if(x==1&&y==1)
                    d=1;


        }
        if(d) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;

    }
    return 0;
}

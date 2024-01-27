#include<iostream>
using namespace std;
  int a[30];
int main()
{
    int t,n,i,j,k,l,m;

    cin>>t;
    char s[10000];
    char ch;
    for(j=0;j<t;j++)
    {
        cin>>n;
        cin>>s;
        for(i=0;i<n;i++)
        {
            k=int(s[i])-96;
            a[k]++;
        }
        m=0;
          for(i=0;i<=26;i++)
        {
            if(a[i]>m) m=a[i];

        }
         for(i=0;i<=26;i++)
        {
            if(a[i]==m)
            {
                ch=i+96;
                cout<<ch;
            }

        }
        cout<<endl;


        for(i=0;i<=26;i++)
        {

            a[i]=0;

        }

    }

    return 0;
}

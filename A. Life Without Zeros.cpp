#include<bits/stdc++.h>
using namespace std;

int32_t main()
{

    int a[200],b[20],c[20],d[20];
    string s,ss;
    cin>>s;
    cin>>ss;
    int i;
    for(i=0;i<20;i++)
    {
        a[i]=-1;
        b[i]=-1;
        c[i]=-1;
        d[i]=-1;
    }
    int j;
    for(i=s.length()-1,j=0;i>=0;i--,j++)
        a[j]=s[i]-'0';
        for(i=ss.length()-1,j=0;i>=0;i--,j++)
        b[j]=ss[i]-'0';
        int e=0,h;
        int l;
        long long f,g;
        l=s.length()<ss.length()?ss.length():s.length();
        for(i=0;i<l;i++)
        {
            h=e+a[i]+b[i];
            e=h/10;
            c[i]=h;
        }
        //for(i=0;i<20;i++)cout<<c[i]; cout<<endl;
      for(i=0;i<20;i++)
    {
        a[i]=-1;
        b[i]=-1;

    }
    e=0;

         for(i=s.length()-1,j=0;i>=0;i--)
         {
             if(s[i]=='0')continue;
           a[j++]=s[i]-'0';
         }

         for(i=ss.length()-1,j=0;i>=0;i--)
         {
             if(ss[i]=='0')continue;
              b[j++]=ss[i]-'0';
         }
         //l=s.length()<ss.length()?ss.length():s.length();
        for(i=0;i<l;i++)
        {
            h=e+a[i]+b[i];
            e=h/10;
            d[i]=h;
            //cout<<d[i];
        }
        //cout<<endl;
        for(i=0;i<20;i++)
    {
        a[i]=-1;
        b[i]=-1;

    }
    for(i=0,j=0;i<l;i++)
    {
        if(c[i]==0)continue;
        a[j++]=c[i];//cout<<a[j-1];
    }
   f=0;
   for(i=0;i<l;i++)
   {
       if(a[i]!=d[i])
       {
           f=1;
           break;
       }
   }
   if(f)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;


    return 0;
}

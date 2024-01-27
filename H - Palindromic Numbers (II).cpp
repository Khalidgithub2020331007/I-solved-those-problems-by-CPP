#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
         char s[100],s1[100];


        cin>>s;
       // s1=s;

        //int i;
//        for(i=0;i<strlen(s);i++)
//            s1[i]=s[i];
             strcpy(s1,s);
            // cout<<s<<" "<<s1<<endl;

       int i,d=0;
       for(i=0;i<strlen(s);i++)
       {
           if(s[i]!=s[strlen(s)-1-i])
           {

               d=1;
               break;
           }
       }
       if(d)  cout<<"Case "<<j<<": "<<"No"<<endl;



        else    cout<<"Case "<<j<<": "<<"Yes"<<endl;


    }
    return 0;


}

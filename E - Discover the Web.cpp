#include<iostream>
#include<bits/stdc++.h>
#include<cstring>
using namespace std;
int main()
{
    stack<string>s;
    stack<string>st;
    char s6[100],s7[100],s1[100]="VISIT",s2[100]="BACK",s3[100]="FORWARD",s4[100]="QUIT",s5[100]="http://www.lightoj.com/";
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cout<<"Case "<<i<<":"<<endl;
        s.push(s5);
        while(1)
        {
            cin>>s6;
            if(strcmp(s6,s1)==0)
            {
                cin>>s7;
                cout<<s7<<endl;
                s.push(s7);
                while(!st.empty())
                {
                    st.pop();
                }

            }
            else if(strcmp(s6,s2)==0)
            {
                 if(s.size()==1)
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                 st.push(s.top());
                s.pop();

               // cout<<s.size()<<" "<<st.size()<<endl;
                cout<<s.top()<<endl;


            }
            else if(strcmp(s6,s3)==0)
            {


                 //cout<<s.size()<<" "<<st.size()<<endl;

                 if(!st.empty())
                {
                     s.push(st.top());
                     st.pop();
                   cout<<s.top()<<endl;

                }
                else
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }


            }
            else if(strcmp(s6,s4)==0)
            {
               break;
            }

        }
         while(!st.empty())
                {
                    st.pop();
                }
                 while(!s.empty())
                {
                    st.pop();
                }

    }
}
/*
VISIT
BACK
FORWARD
QUIT
*/

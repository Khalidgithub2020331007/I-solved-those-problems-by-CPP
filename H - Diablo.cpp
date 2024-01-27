#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n,m,i,j,l,k,d;
    list<int>li;
    cin>>t;

    char c;
    for(k=0;k<t;k++)
    {

        cin>>n>>m;

        for(i=0;i<n;i++)
        {
            cin>>d;
            li.push_back(d);

        }
         cout<<"Case "<<k+1<<":\n";
        for(j=0;j<m;j++)
        {
            cin>>c>>d;

            if(c=='c')
            {
                   if(d>li.size())
                    {
                        cout<<"none\n";
                    }
                    else
                    {

                        i=1;
                       for(auto it:li)
                        {
                            if(d==i)
                            {
                                cout<<it<<endl;
                                break;
                            }
                            i++;
                        }
                        list<int>::iterator it;
                        it=li.begin();
                        advance(it,i-1);
                        li.erase(it);
                    }
            }
            else
            {
                li.push_back(d);
            }
        }
       li.clear();

    }
    return 0;
}


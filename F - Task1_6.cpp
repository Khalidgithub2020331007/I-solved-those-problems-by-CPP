#include<bits/stdc++.h>
using namespace std;
int main()
{

  int t;
  cin>>t;
  while(t--)
  {
      int i,j;
     char a[8][8];
     for (i=0;i<8;i++)
        for (j=0;j<8;j++)
        cin>>a[i][j];

        bool d=false;

        for (i=0;i<8;i++)
        {
            for (j=0;j<8;j++)
            {
                if(a[j][i]!='.')
                {
                    cout<<a[j][i];
                }
            }
        }
        cout<<endl;




  }
}


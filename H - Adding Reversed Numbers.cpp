#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i,j,k,l1,l2,m,n,f,ex;


    cin>>t;
    for(j=0;j<t;j++)
    {
        char a[50]={'0'},b[50]={'0'},c[50]={'0'},d[50]={'0'};
    int a1[50]={0},b1[50]={0},c1[50]={0},d1[50]={0};
        cin>>a>>c;
        l1=strlen(a);
        l2=strlen(c);
        f=1;
        k=-1;
        for(i=l1-1;i>=0;i--)
        {
            if(a[i]!='0') f=0;
            if(f)
            {
                continue;
            }
            k++;
            b[k]=a[i];

        }
         f=1;
        k=-1;
        for(i=l2-1;i>=0;i--)
        {
            if(c[i]!='0') f=0;
            if(f)
            {
                continue;
            }
            k++;
            d[k]=c[i];

        }
          l1=strlen(b);
        l2=strlen(d);

        if(l1>l2)
        {
            k=l1+1;
             for(i=l2;i>0;i--)
                {

                    k--;
                    d1[k]=d[i-1]-'0';

                }
                for(i=l1;i>0;i--)
                {


                    b1[i]=b[i-1]-'0' ;

                }
        }
        else
        {
            k=l2+1;
             for(i=l1;i>0;i--)
                {

                    k--;
                    b1[k]=b[i-1]-'0';

                }
                for(i=l2;i>0;i--)
                {


                    d1[i]=d[i-1]-'0' ;

                }

        }
        ex=0;
        f=1;
        if(l1>l2)
        {

                  for(i=l1;i>0;i--)
                {
                    a1[i]=b1[i]+d1[i]+ex;
                    ex=a1[i]/10;
                    a1[i]=a1[i]%10;
                    if(a1[i]!=0) f=0;
                    if(f)
                    {
                        continue;
                    }
                    cout<<a1[i];

                }
                if(ex!=0) cout<<ex;
                  cout<<endl;

        }
        else
        {


                  for(i=l2;i>0;i--)
                {
                    a1[i]=b1[i]+d1[i]+ex;
                    ex=a1[i]/10;
                    a1[i]=a1[i]%10;
                    if(a1[i]!=0) f=0;
                    if(f)
                    {
                        continue;
                    }
                    cout<<a1[i];
                }
                if(ex!=0) cout<<ex;
                  cout<<endl;

        }


    }

    return 0;
}

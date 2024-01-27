#include<iostream>
using namespace std;
int main()

{

         int n,m,i,k,j,l;
    int a[110];
    cin>>n>>m;
    if(n==1&&m==0)
    {
        cout<<"0 0"<<endl;
    }

    else if(m>(9*n)||m==0)
    {
        cout<<"-1 -1"<<endl;
    }

    else

    {
        for(i=0;i<=n;i++)
        {
            a[i]=0;
        }

        k=n;
        m=m-1;
        for(i=0;i<k;i++)
        {


           if(m>=9)
            {

            a[i]=9;
            m=m-9;

            }
            else if(m>=0)
            {

                a[i]=m;
              m=0;
              n=0;

            }


        }
         if(a[k-1]==0)
         {
             cout<<1;
              for(i=k-2;i>=0;i--)
                {
                    cout<<a[i];
                }
                for(i=0;i<k;i++)
             {
                 if(a[i]!=9)
                 {
                     a[i]++;
                     break;
                 }
             }
         }
        else if(a[k-1]!=0)
         {
             for(i=0;i<k;i++)
             {
                 if(a[i]!=9)
                 {
                     a[i]++;
                     break;
                 }
             }
              for(i=k-1;i>=0;i--)
            {
                cout<<a[i];
            }


         }
            cout<<" ";
            for(i=0;i<k;i++)
            {
                cout<<a[i];
            }
        cout<<endl;




    }


    return 0;
}

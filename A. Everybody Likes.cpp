#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,j,f,k,m,l;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        long long int a[n+5];
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }

        m=0;
        for(j=0;j<n-1;j++)
        {


            if(a[j]%2==a[j+1]%2)
            {
                if(a[j]%2==0)
                    a[j]=2;
                else a[j]=1;

                m++;
                 for(k=j+1;k<n-1;k++)
                {
                    a[k]=a[k+1];


                }
                n--;
                j=-1;

            }

        }
        cout<<m<<endl;

    }
    return 0;

}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{

         long long int n,i,j=-1,a[100000];

        cin>>n;
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                        n=n/i;

                  j++;
                  a[j]=i;
                 i=1;


            }
             else if(i%2!=0)
            {
                i++;
            }


        }
        j++;
        a[j]=n;
        cout<<a[0]<<endl;
        for(i=1;i<=j;i++)
        {
            if(a[i]==a[i-1])
                continue;

            cout<<a[i]<<endl;
        }
        cout<<endl;

        return 0;

}

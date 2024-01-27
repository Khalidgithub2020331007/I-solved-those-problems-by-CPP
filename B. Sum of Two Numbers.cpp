#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,j,i,k,x,y;
    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%2!=0)
        {
            x=n/2;
            y=x+1;
        }
        else
        {
            x=y=n/2;
        }


        if((n%10==9&&((n%100)/10)%2!=0))
        {

           if(((n%1000)-99)%2==1&&(n%100)==99)
            {

            }
            else
            {

                 x+=5;
                y-=5;
            }

        }
        cout<<x<< " "<<y<<endl;
    }

    return 0;
}

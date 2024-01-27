#include<iostream>
using namespace std;
int main()
{
    int n,a,b,i,j,k,l;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        j=0;
        for(;;)
        {



            if(a<=0||b<=0)
            {
                cout<<j<<endl;
                break;

            }
             a=a+3;
             b=b+2;
             j++;
            if(a>5&&b>10)
            {
                j++;
                a=a-5;
                b=b-10;

            }


            else if(a>20)
            {
                j++;
                a=a-20;
                b=b+5;

            }


            else
            {
                cout<<j<<endl;
                break;
            }
        }

    }
    return 0;
}

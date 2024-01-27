#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2,x,y;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        x=abs(y1-y2);
        cout<<(x1+x)<<" "<<y1<<" "<<x1+x<<" "<<y2;
    }
    else if(y1==y2)
    {
                x=abs(x1-x2);
        cout<<x1<<" "<<(y1+x)<<" "<<x2<<" "<<y1+x;
    }
    else if(abs(x1-x2)==abs(y1-y2))
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
    }
    else cout<<-1;

    return 0;
}

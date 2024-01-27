#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,w,d,h,w1,d1,w2,d2,a,b,c,e,i,j;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>w>>d>>h;
        cin>>w1>>d1>>w2>>d2;
        a=abs(d1-d2)+w1+w2;
        b=abs(d1-d2)+(w-w1)+(w-w2);
        c=abs(w1-w2)+d1+d2;
        e=abs(w1-w2)+(d-d1)+(d-d2);
        a=a<b?a:b;
        c=c<e?c:e;
        a=a<c?a:c;
        cout<<a+h<<endl;


    }
    return 0;
}

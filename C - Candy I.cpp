#include<iostream>
#include<cmath>
#include<climits>
using namespace std;
int main()
{
   long long int sum;
    long long int a[10000],n,big,c,i,small;
    while(1)
    {
        cin>>n;
        if(n==-1)  break;

        small=0;
        big=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];

        }
          c=sum/n;
          for(i=0;i<n;i++)
        {
            if(a[i]<c)  big=big+(c-a[i]);
            else small=small+(a[i]-c);
        }

        if(small!=big) cout<<-1<<endl;
        else cout<<big<<endl;
    }
    return 0;
}

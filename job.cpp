#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],b[n+1],c[n+1],e[n+1],i,j,k,l;
    c[0]=500;

    for(i=1;i<=n;i++)
    {
        a[i]=i;
        cin>>j>>k;

        b[i]=j;
        c[i]=k;
        e[i]=b[i];

    }
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        if(b[i]<b[j])
        {
            swap(a[i],a[j]);
            swap (b[i],b[j]);
            swap(c[i],c[j]);
        }

    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    for(i=1;i<=n;i++) cout<<e[i]<<endl;
    int m=n;
    n=*max_element(c+1,c+n+1);
    cout<<n<<endl;
    int d[m+1];
    for(i=0;i<=m;i++)
    d[i]=0;
    for(i=1;i<=m;i++)
    {
        if(d[c[i]]==0)
            d[c[i]]=a[i];
        else{
            for(j=i-1;;)
            {
                if(d[j]==0)
                {
                    d[j]=a[i];
                    break;
                }


                j--;
                if(j==0) break;
            }
        }
    }
     int sum=0;

    for(i=1;i<=n;i++)
    {
                cout<<d[i]<<" --"<<e[d[i]]<<" ";
                sum+=e[d[i]];

    }
    cout<<endl<<sum;
     return 0;



}
/*
5
10 1
5 3
20 2
1 3
15 2
*/

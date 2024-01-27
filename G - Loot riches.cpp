#include<iostream>
#include <fstream>
using namespace std;
int a[100000],tree[50000];
void update(int node,int b,int e)
{
   if(b==e)
   {
       tree[node]=a[b];
       return;
   }
   int left,right,mid;
   mid=(b+e)/2;
   left=(2*node);
   right=(2*node)+1;
   update(left,b,mid);
   update(right,mid+1,e);
   tree[node]=tree[left]+tree[right];


}

int  three(int node,int b,int e,int newvalue,int newvalue1)
{
    if(newvalue>e||newvalue1<b)
   {

       return 0 ;
   }
   if(newvalue<=b&&e<=newvalue1)
   {
       return tree[node];
   }
   int left,right,mid,p1,p2;
   mid=(b+e)/2;
   left=(2*node);
   right=(2*node)+1;
   p1=three(right, mid+1,e,newvalue,newvalue1);
p2=three(left,b,mid,newvalue,newvalue1);
   return p1+p2;
}
int main()
{
      ofstream outdata;
    int t,n,i,m,value,value1,j,d,k,l;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cout<<"Case "<<j+1<<":\n";
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }

        for(k=0;k<m;k++)
        {
            outdata.open("example2.text");
             cin>>d;
            if(d==1)
            {
                cin>>value;
                cout<<a[value]<<endl;
                a[value]=0;

            }
            else if(d==2)
            {
                cin>>value>>value1;
                a[value]+=value1;

            }
            else
            {
                cin>>value>>value1;


               update(1,0,n-1);
                l=three(1,0,n-1,value,value1);

                cout<<l<<endl;
            }
        }


    }
       outdata.close();
    return 0;
}

/*
1
6 10
6 7 8 3 2 1
*/

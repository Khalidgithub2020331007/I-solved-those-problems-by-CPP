#include<bits/stdc++.h>
using namespace std;
 int a[1000000];
int main(){
    int  x;
    long long xsquare;
    cin>>x;



    for(int i=0;i<x;i++)a[i]=-1;



    for(int i=0;i<x;i++){
           xsquare=(i%x);
           xsquare*=xsquare;
           xsquare%=x;

        if(a[xsquare]!=-1)continue;

        a[xsquare]=i;


    }
    for(int i=0;i<x;i++)cout<<a[i]<<" ";
}


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
   int i=-1,c=0;
   string s1="add",s2="remove";
   set<int>myset;
   for (int j=0;j<2*n;j++)
   {
     string s;
     int a;
     cin>>s;
     if (s==s1)
     {
       cin>>a;
       arr[++i]=a;
       myset.insert(a);

     }
     else{

       if(!myset.empty())
       {
         set<int>::iterator it=myset.begin();
         int element=*it;
         if (arr[i]==element)
         {
           i--;
           myset.erase(element);

         }
         else
         {

           c++;
           myset.erase(element);
           sort(arr,arr+(i+1),greater<int>());

           i--;
         }
       }
     }
   }


    cout<<c;

}

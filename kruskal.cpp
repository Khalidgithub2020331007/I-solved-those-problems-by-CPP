#include<bits/stdc++.h>
using namespace std;
int v,e,parent[100],cost[100][100];
int find(int i)
{
    while(parent[i]!=i)
    {
        i=parent[i];
    }
    return i;
}
void unioun(int i,int j)
{

    int a=find(i);
    int b=find(j);
    parent[a]=b;
}
void kruskal()
{
   long long int mincost=0;
    int edgecount=0;
    while(edgecount<v-1)
    {
        int min=INT_MAX,a=-1,b=-1;
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(find(i)!=find(j)&&cost[i][j]<min)
                {
                    min=cost[i][j];
                    a=i;
                    b=j;

                }
            }
        }
        unioun(a,b);
         if(min!=INT_MAX)
        {
            cout<<"edge "<<edgecount<<" :("<<a<<" "<<b<<")  cost:"<<min<<endl;
      mincost=mincost+min;

        }
        edgecount++;
         }
    cout<<"MInimum cost:"<<mincost;
}
int main()
{
    ifstream file;
    file.open("input.txt");
    file>>v>>e;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
            cost[i][j]=INT_MAX;
    }
    for(int i=0;i<e;i++){
        int m,n;
        file>>m>>n;
        file>>cost[n][m];
        cost[m][n]=cost[n][m];


    }
    for(int i=0;i<v;i++)
        parent[i]=i;
    kruskal();

    file.close();

}

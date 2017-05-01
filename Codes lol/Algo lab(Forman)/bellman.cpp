#include<bits/stdc++.h>
using namespace std;
int v,e,w,x,y,s,res;
int adj[1000][1000],d[1000],pi[1000];
void init()
{
    for(int i=1; i<=v; i++)
    {
        d[i]=99999999;
        pi[i]=-1;
    }
    d[s]=0;
}
int bellmanford()
{
    init();
    for(int i=1; i<v; i++)
    {
        for(int j=1; j<=v; j++)
        {
            for(int k=1; k<=v; k++)
            {
                if(adj[j][k]!=0){
                    if(d[j]+adj[j][k]<d[k]){
                        d[k]=d[j]+adj[j][k];
                        pi[k]=j;
                    }
                }

            }
        }
    }
    for(int j=1; j<=v; j++)
    {
        for(int k=1; k<=v; k++)
        {
            if(adj[j][k]!=0){
            if(d[j]+adj[j][k]<d[k])
                return 0;
            }
        }
    }


    return 1;
}
int main()
{
    memset(adj,0,sizeof(adj));
    cin>>v>>e;
    for(int i=1; i<=e; i++)
    {
        cin>>x>>y>>w;
        adj[x][y]=w;
    }
    cin>>s;
    res=bellmanford();
    cout<<res<<endl;
}

#include<bits/stdc++.h>

using namespace std;

int adj[50][50],u,v,n,i,e,j,s;
int c[50],d[50],p[50],w=1,gr=2,b=3;

void bfs(int s)
{
    for(i=1; i<=n; i++)
    {
        c[i]=w;
        d[i]=999999;
        p[i]='\0';
    }
    c[s]=gr;
    d[s]=0;
    p[s]=0;
    queue<int> q;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        cout<<"v="<<u<<"\t"<<"Distance="<<d[u]<<"\t"<<"Parent="<<p[u]<<"\n";
        q.pop();
        for(v=1; v<=n; v++)
        {
            if(adj[u][v]==1)
            {
                if(c[v]==w)
                {
                    c[v]=gr;
                    d[v]=d[u]+1;
                    p[v]=u;
                    q.push(v);
                }
            }
        }
        c[u]=b;
    }
}

int main()
{
    cin>>n>>e;
    for(i=1; i<=e; i++)
    {
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }
    cin>>s;
    bfs(s);
    return 0;
}

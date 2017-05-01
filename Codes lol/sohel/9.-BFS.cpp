#include <bits/stdc++.h>
using namespace std;

int mat[100][100],edge,vertices,u,v;

int color[100], dis[100], parent[100],white=1,grey=2,black=3;

void bfs(int s)
{
    for(int i=1; i<=vertices; i++)
    {
        color[i]=white;
        dis[i]=9999;
        parent[i]=NULL;
    }
    color[s]=grey;
    dis[s]=0;
    parent[s]=0;

    queue<int>q;
    q.push(s);
    while(!q.empty())
    {
        u=q.front();
        q.pop();
        cout<<"vertex="<<u<<"\t"<<"distance="<<dis[u]<<"\t"<<"Parent="<<parent[u]<<"\n";
        for(v=1; v<=vertices; v++)
        {
            if(mat[u][v]==1)
            {
                if(color[v]==white)
                {
                    color[v]=grey;
                    dis[v]=dis[u]+1;
                    parent[v]=u;
                    q.push(v);
                }
            }
        }
        color[u]=black;
    }
}
int main()
{
    int s;
    cout<<"Enter edge and verices number\n";
    cin>>edge>>vertices;
    cout<<"Enter the adjacency matrix\n";
    for(int j=1; j<=edge; j++)
    {
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    cout<<"Enter source\n";
    cin>>s;
    bfs(s);
    return 0;
}

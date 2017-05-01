#include<bits/stdc++.h>
using namespace std;
int adj[50][50],c[50],p[50],d[50],f[50],t=0,e,u,v,n,w=1,g=2,b=3,i,s;

void dfs_vis(int u);

void dfs(int s){
    for(i=1;i<=n;i++){
        c[i]=w;
        p[i]='\0';
    }
    for(i=1;i<=n;i++){
        if(c[i]==w){
            dfs_vis(i);
        }
    }
}

void dfs_vis(int u){
    t=t+1;
    d[u]=t;
    c[u]=g;
    for(v=1;v<=n;v++){
        if(adj[u][v]==1){
            if(c[v]==w){
                p[v]=u;
                dfs_vis(v);
            }
        }
    }
    c[u]=b;
    t=t+1;
    f[u]=t;
    cout<<"v: "<<u<<" "<<"P: "<<p[u]<<" "<<"S_t: "<<d[u]<<" "<<"F_t: "<<f[u]<<" "<<"C: "<<c[u]<<"\n";
}

int main(){
    cin>>n>>e;
    for(i=1;i<=e;i++){
        cin>>u>>v;
        adj[u][v]=1;
        //adj[v][u]=1;
    }
    cin>>s;
    dfs(s);
    return 0;
}

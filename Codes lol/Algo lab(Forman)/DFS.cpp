#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];
void dfs(int u){
int v;
visited[u]=1;
for(int j=0;j<adj[u].size();j++){
    v=adj[u][j];
    if(visited[v]==0){
        cout<<v<<" ";
        dfs(v);
    }
}
}
int main(){
int edge,node,x,y;
cin>>edge>>node;
for(int i=1;i<=edge;i++){
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
cout<<1<<" ";
dfs(1);
}

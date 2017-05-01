#include<bits/stdc++.h>
using namespace std;
vector<int>adj[100];
int visited[100];

void bfs(int s,int n){
for(int i=0;i<n;i++)
    visited[i]=0;
queue<int>Q;
Q.push(s);
visited[s]=1;
while(!Q.empty()){
    int u=Q.front();
    Q.pop();
    for(int i=0;i<adj[u].size();i++){
        if(visited[adj[u][i]]==0){
          int v=adj[u][i];
          visited[v]=1;
          Q.push(v);
        }

    }
}
for(int i=1;i<=n;i++)
    if(visted[i]==1){
        cout<<i<<" ";
    }
}

/// first we find Adjacency list of the give graph.Then we take input total number of node and edge.
int main(){
int node,edge,x,y,s;
cin>>node>>edge; /// input total number of node and edge.
for(int i=1;i<=edge;i++){ ///inout adjacency node of graph.
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
cin>>s;
bfs(s,node); /// Here start bfs from node 6.

}

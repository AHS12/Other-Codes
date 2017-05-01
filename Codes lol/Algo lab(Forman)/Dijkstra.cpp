#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
vector<pii>G[1000];
int d[1000],parent[1000];
int n,e,w;
int path(int j){
if(parent[j]==-1)
    return 0;
path(parent[j]);
printf("%d ",j);


}
void dijktra(int s){
for(int i=1;i<=n;i++){
    d[i]=999999999;
}
d[s]=0;
parent[s]=-1;
int u,c,v,wt;
priority_queue<pii,vector<pii>,greater<pii> >q;
q.push(pii(s,0));
while(!q.empty()){
    u=q.top().first;
    c=q.top().second;
    q.pop();
    if(d[u]<c)
        continue;
    for(int i=0;i<G[u].size();i++){
         v=G[u][i].first;
         wt=G[u][i].second;
         if(d[v]>d[u]+wt){
            d[v]=d[u]+wt;
            parent[v]=u;
            q.push(pii(v,d[v]));
         }
    }




}




}
int main(){
int x,y;
cin>>n>>e;
for(int i=1;i<=e;i++){
    cin>>x>>y>>w;
    G[x].push_back(pii(y,w));
    G[y].push_back(pii(x,w));
}
dijktra(1);
for(int i=1;i<=n;i++){
    if(i==1)
        continue;
    else if(d[i]>=999999999)
        cout<<"not rech from source"<<endl;
    else
        cout<<"shorest distent for node"<<i<<" is "<<d[i]<<endl;
}
path(n);




}

#include<bits/stdc++.h>
using namespace std;
struct edge{
    int  u,v;
    int w;
};
typedef struct edge e;
e arr[100];

int p[100];

int n;
void make_set(int n){
    for(int i=1; i<=n ;i++)
        p[i] = i;
}

int find_set(int x){
    if(x==p[x]){
        return p[x];
    }
   return p[x]  = find_set(p[x]);
}
int makeUnion(int u, int v){
    int a = find_set(u);
    int b = find_set(v);
    if(b!=a)
        p[v] = p[u];
    /*cout<<"check parent\n";
    for(int i=1; i<=n;i++)
        cout<<i<<" "<<p[i]<<endl;
    cout<<endl;*/
}

bool com(e a, e b){
    return a.w<b.w;
}

vector<edge> A;
int main()
{

    cin>>n;  ///total vertex
    make_set(n);

    int total_edge;
    cin>>total_edge; ///total edges
    for(int i=1;i<=total_edge;i++){
        cin>>arr[i].u>>arr[i].v>>arr[i].w;
    }
    sort(arr,arr+total_edge+1,com);
    for(int i=1;i<=total_edge;i++){
        if(find_set(arr[i].u)!=find_set(arr[i].v)){
            A.push_back(arr[i]);
            makeUnion(arr[i].u,arr[i].v);
        }
    }
    for(int i=0;i<A.size();i++){
        edge l=A[i];
        cout<<l.u<<" "<<l.v<<" "<<l.w<<endl;
    }

    return 0;
}

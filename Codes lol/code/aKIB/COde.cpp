#include<bits/stdc++.h>
using namespace std;
struct edge{
    int  u,v;
    int w;
};
typedef struct edge e;
e arr[100];

int p[100];

void make_set(int x ){
    p[x]=x;
}

int find_set(int x){
    if(x!=p[x]){
        p[x]=find_set(p[x]);
    }
   return p[x];
}

bool com(e a, e b){
    return a.w<b.w;
}

vector<edge> A;
int main()
{
    int n;
    cin>>n;  ///total vertex
    for(int i=1;i<=n;i++){
        make_set(i);
    }
    int total_edge;
    cin>>total_edge; ///total edges
    for(int i=1;i<=total_edge;i++){
        cin>>arr[i].u>>arr[i].v>>arr[i].w;
    }
    sort(arr,arr+total_edge+1,com);
    for(int i=1;i<=total_edge;i++){
        if(find_set(arr[i].u)!=find_set(arr[i].v)){
            A.push_back(arr[i]);
        }
    }
    for(int i=0;i<A.size();i++){
        edge l=A[i];
        cout<<l.u<<" "<<l.v<<" "<<l.w<<endl;
    }

    return 0;
}

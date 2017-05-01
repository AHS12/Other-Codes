#include<bits/stdc++.h>
using namespace std;

int total_vertex;
int dis[100];
int adjList[100][100];
bool vis[100];
struct myOrder
{
    bool operator()(const int& a, const int& b)
    {
        return a > b;
    }
};

void initialize_single_source(int source)
{
    for(int i=1; i<=total_vertex; i++)
    {
        dis[i]=9999;
    }
    dis[source]=0;
}
void relax(int u,int v,int w)
{
    if(dis[v]>(dis[u]+adjList[u][v]))
    {
        dis[v]=dis[u]+adjList[u][v];
    }
}

int main()
{
    cin>>total_vertex;
    for(int i=1; i<=total_vertex; i++)
    {
        for(int j=1; j<=total_vertex; j++)
        {
            cin>>adjList[i][j];
        }
    }
    initialize_single_source(1);
    vector<int > my_set;
    priority_queue<int,vector<int>,myOrder> pq;
    pq.push(1);
    vis[1]=true;
    while(!pq.empty())
    {
        int u=pq.top();
        cout<<u<< " ";
        pq.pop();
        my_set.push_back(u);
        for(int i=1; i<=total_vertex; i++)
        {
            if(vis[i]==false)
            {
                if(dis[i]>(dis[u]+adjList[u][i]))
                {
                    dis[i]=dis[u]+adjList[u][i];
                    pq.push(i);
                    vis[i]=true;
                }

            }
        }
    }
    cout<<endl;
    for(int i=1; i<=total_vertex; i++)
    {
        cout<<dis[i]<<" ";
    }


    return 0;
}

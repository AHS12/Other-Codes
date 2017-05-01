#include<bits/stdc++.h>
using namespace std;
int V;
int graph[1000][1000];
bool vis[1000];
int parent[1000];
int key[1000];
struct myOrder
{
    bool operator()(const int& a, const int& b)
    {
        return a > b;
    }
};

int printMST()
{
    printf("Edge   Weight\n");
    for (int i = 1; i < V; i++)
        printf("%d - %d    %d \n", parent[i], i, graph[i][parent[i]]);
}

void primMST(int V)
{

    for (int i = 0; i < V; i++)
    {
        key[i] = 9999;
        vis[i] = false;
    }
    key[0] = 0;             ///Source er key value
    parent[0] = -1;         ///source parent thake na.

    priority_queue<int,vector<int>,myOrder> pq;

    pq.push(0);


    for (int i = 0; i < V-1; i++)
    {
        int u = pq.top();   /// Extract Min.Line no 7
        pq.pop();
        //cout<<u<< " ";
        vis[u] = true;
        for (int v = 0; v < V; v++)
        {
            if (graph[u][v] && vis[v] == false && graph[u][v] <  key[v])
            {
                parent[v]  = u;
                key[v] = graph[u][v];
                pq.push(key[v]);
            }
        }
    }

    printMST();
}


int main()
{
    cout<<"Enter the number of vertex : ";
    cin>>V;

    for(int i=0; i<V; i++)
    {
        for(int j=0; j<V; j++)
        {
            cin>>graph[i][j];
        }
    }

    primMST(V);

    return 0;
}
 /**    {0, 2, 0, 6, 0}
        {2, 0, 3, 8, 5}
        {0, 3, 0, 0, 7}
        {6, 8, 0, 0, 9}
        {0, 5, 7, 9, 0}
    */

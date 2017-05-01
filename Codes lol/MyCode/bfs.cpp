#include <bits/stdc++.h>
using namespace std;

int graph[100][100],node,edge,source,destination,white = 1,gray = 2,black = 3;
int colour[100],dis[100],predecessor[100],u,v;

void bfs(int source)
{
    for (int i=1; i<=node; i++)
    {
        colour[i] = white;
        dis[i] = 999999;
        predecessor[i] = '\0' ;
    }

    colour[source] = gray;
    dis[source] = 0;
    predecessor[source] = 0;

    queue <int> Q;

    Q.push(source);

    while(!Q.empty())
    {
        u = Q.front();
        cout<<"Node = "<<u<<"|| Distance = "<<dis[u]<<"|| Predecessor = "<<predecessor[u]<<endl;
        Q.pop();

        for(v=1; v<=node; v++)
        {
            if(graph[u][v] == 1)
            {
                if(colour[v] == white)
                {
                    colour[v] = gray;
                    dis[v] = dis[u] + 1;
                    predecessor[v] = u;
                    Q.push(v);
                }
            }
        }

        colour[u] = black;
    }

}

void Print_Path(int source,int destination)
{

    if(source == destination)
    {
        cout<<source<<" ";
    }

    else if(predecessor[destination] == 0)
    {
        cout<<"No Path"<<endl;
    }

    else
    {
        Print_Path(source,predecessor[destination]);
        cout<<destination<<" ";
    }
}


int main()
{
    cout<<"How many node And edge?"<<endl;
    cin>>node>>edge;
    cout<<"Enter Adjacent Nodes:"<<endl;

    for(int i=1; i<=edge; i++)
    {

        cin>>u>>v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    cout<<"Enter Source Node:"<<endl;
    cin>>source;

    bfs(source);

    cout<<endl;
    cout<<"Enter Destination node for Shortest path"<<endl;
    cin>>destination;

    cout<<"Shortest Path :";
    Print_Path(source,destination);

}

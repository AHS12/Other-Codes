#include <bits/stdc++.h>
using namespace std;

int graph[100][100],edge,white = 1, gray = 2,black = 3,u,v,t =0,colour[100],predecessor[100],discover[100],finish[100],source,node,i;
/*list <int> toplist;
list <int> :: iterator j; */

void dfs_visit(int u);

void dfs(int source)
{
    for (i=1; i<=node; i++)
    {
        colour[i] = white;
        predecessor[i] = '\0';
    }

    t = 0;

    for(i=1; i<=node; i++)
    {
        if(colour[i] == white)
        {
            dfs_visit(i);
        }
    }

  /*  toplist.push_front(source);
    for(j=toplist.begin(); j!=toplist.end(); i++)
    {
        cout<<*j<<" ";
    } */
}

void dfs_visit(int u)
{
    //cout<<"Node: "<<u<<" || "<<"Predecessor: "<<predecessor[u]<<" || "<<"Discover time: "<<discover[u]<<" || "<<"Finish time: "<<finish[u]<<" || "<<"Colour: "<<colour[u]<<endl;

    t = t+1;
    discover[u] = t;
    colour[u] = gray;

   // cout<<"Node: "<<u<<" || "<<"Predecessor: "<<predecessor[u]<<" || "<<"Discover time: "<<discover[u]<<" || "<<endl;//<<"Finish time: "<<finish[u]<<" || "<<"Colour: "<<colour[u]<<endl;


    for(v=1; v<=node; v++)
    {
        if(graph[u][v] == 1)
        {
            if(colour[v] == white)
            {
                predecessor[v] = u;
                dfs_visit(v);
            }
        }

    }

    colour[u] = black;
    t = t+1;
    finish[u] = t;


    cout<<"Node: "<<u<<" || "<<"Predecessor: "<<predecessor[u]<<" || "<<"Discover time: "<<discover[u]<<" || "<<"Finish time: "<<finish[u]<<" || "<<"Colour: "<<colour[u]<<endl;

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
        // graph[v][u] = 1;
    }

    cout<<"Enter Source Node:"<<endl;
    cin>>source;

    dfs(source);

    cout<<endl;


}

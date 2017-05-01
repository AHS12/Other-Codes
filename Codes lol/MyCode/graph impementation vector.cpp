#include <bits/stdc++.h>
using namespace std;

int main()
{
    //testing Graph Figure

    /* (1)---------(2)
        |           |
        |           |
        |           |
        |           |
       (4).........(3)

       */

    int node,edge,i,j;
    vector <int> graph[1001];

    cout<<"How Many Nodes?"<<endl;
    cin>>node;

    cout<<"How many Edges"<<endl;
    cin>>edge;

    for(int i=0; i<edge; i++)
    {
        int a,b;
        cout<<"Enter Adjacent Nodes:"<<endl;
        cin>>a>>b;
        graph[a].push_back(b);
        //not requited for directed graph
        //  graph[b].push_back(a);

    }

    cout<<endl<<"Adjacent List"<<endl<<endl;

    for(int i=0; i<node; i++)
    {
        cout<<"Node "<<i<<": ";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<" "<<graph[i][j];
            // printf(" %d",graph[i][j]);
        }
        cout<<endl;
    }
}

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

    int graph[100][100];
    int node, edge,a,b;


    cout<<"How Many Nodes?"<<endl;
    cin>>node;

    cout<<"How many Edges"<<endl;
    cin>>edge;

    for(int i=0; i<edge; i++)
    {
        cout<<endl<<"Enter Adjacent Nodes"<<endl;
        cin>>a>>b;
        graph[a][b] = 1;
        //not required for directed graph
        graph[b][a] = 1;

    }

    cout<<endl<<"Adjacent Matrix:"<<endl<<endl;

    for(int i=0; i<node; i++)
    {
        for(int j=0; j<node; j++)
        {

            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}

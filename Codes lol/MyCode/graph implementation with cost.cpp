#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* Sample graph
              2
        (0)---------(1)
         |           |
      1  |           | 3
         |           |
         |           |
         (3)--------(2)
               4

        */


    int edge,i,j;
    vector <pair<int,int> > graph[1001];
    cout<<"How many edge?"<<endl;
    cin>>edge;


    for(int i=0; i<edge; i++)
    {
        int a,b,cost;
        cin>>a>>b>>cost;
        graph[a].push_back(make_pair(b,cost));
        graph[b].push_back(make_pair(a,cost));

    }

    cout<<endl<<"Adjacent List"<<endl<<endl;

    for(i=0; i<edge; i++)
    {
        cout<<"Node "<<i<<": ";
        for(j=0; j<graph[i].size(); j++)
        {
            cout<<"adj: "<<graph[i][j].first<<"||"<<" cost: "<<graph[i][j].second<<" ";
            //printf("adj = %d cost = %d || " ,node[i][j].first , node[i][j].second);
        }
        cout<<endl;
    }
}


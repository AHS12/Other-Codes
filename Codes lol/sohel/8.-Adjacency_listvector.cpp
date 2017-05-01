#include <stdio.h>
#include <vector>
using namespace std;
vector <int> node[1001];

int main()
{
    /*
          1
    (0)--------(3)
     |          |
     |2         |4
     |          |
     |     3    |
    (1)--------(2)
    */
    int edge, i, j;

    scanf("%d", &edge);
    for(i = 1; i <= edge; i++)
    {
        int u, v, cost;
        scanf("%d %d",&u, &v);
        node[u].push_back(v);
        node[v].push_back(u);
    }

    for(int i = 0; i < edge; i++)
    {
        printf("Node %d: ", i);
        for(int j = 0; j < node[i].size(); j++)
        {
            printf(" %d",node[i][j]);

        }
        printf("\n");
    }


}

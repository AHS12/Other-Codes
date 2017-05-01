#include <bits/stdc++.h>
using namespace std;
int mat[100][100];
int main()
{
    int edge, i,j, u,v;

    cin>>edge;

    /*  u(black)    v(adj_u)
          (1)--------(3)
           |          |
           |          |
           |          |
           |          |
    v(adj_u)(4)--------(2)
       */

    for(i=1; i<=edge; i++)
    {
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }

    for( i=1; i<=edge; i++)
    {
        for(j=1; j<=edge; j++)
        {
            printf("%d ", mat[i][j]);

        }
        printf("\n");
    }

}

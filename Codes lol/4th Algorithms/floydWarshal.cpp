#include <algorithm>
#include <cstdio>
using namespace std;

#define INF 1000000000

int main() {
  int V, E, u, v, w, graph[200][200];

  freopen("floydWarshal.txt", "r", stdin);

  scanf("%d %d", &V, &E);

// maan initialize korche.
  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++)
      graph[i][j] = INF;        // node i theke node j ekta boro man dhore nicche. infinite maan dhora jaina tai.
    graph[i][i] = 0;            // node i theke node i jete 0 distance jete hoi.
  }

//input nicche.
  for (int i = 0; i < E; i++) {    //jotota edge ache totota loop hobe.
    scanf("%d %d %d", &u, &v, &w);  // u node to v node weight is w. u--v ekta edge. duita node mile ekta edge.
    graph[u][v] = w; // directed graph hole nicher line baad jabe. graphe teer chinno thakle directed graph.
    graph[v][u] = w; //undirected hole ey lineO dite hobe
  }
//floydWarshal er algorithm
  for (int k = 0; k < V; k++) // 3 ta nested loop. sobar bairer ta hocche k loop
    for (int i = 0; i < V; i++)
      for (int j = 0; j < V; j++)
        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
        // ey line ta sobtheke important.
        // node i theke node j ekta rasta ache. ey rastar durotto mane = graph[i][j]
        // ar node i theke k and node k theke j duita rasta ache.
        // ey duita rastar eksathe jog korle = graph[i][k] + graph[k][j]
        // min function diye check korche ager rasta ta beshi chhoto naki porer duitar jogfol chhoto.
        // jeta chhoto hobe seta save korbe.

  for (int i = 0; i < V; i++)// duita nested loop chaliye kon node theke kon node koto dure ache seta print korche
    for (int j = 0; j < V; j++)
      printf("  %-4d theke   %-4d sobcheye kom durotto: %4d\n", i, j, graph[i][j]);  //%d er poriborte %4d dile 4 ghor space niye maan print kore. %d dileo hobe.

  return 0;
}

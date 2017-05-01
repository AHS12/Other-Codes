#include <bits/stdc++.h>

#define nl printf("\n")
#define pb(a) push_back(a)
#define sz(a) sizeof(a)
#define setz(a) memset(a, 0, sizeof(a))
#define setneg(a) memset(a, -1, sizeof(a))

#define isc(a) scanf("%d", &a)
#define isc2(a,b) scanf("%d%d", &a,&b)
#define isc3(a,b,c) scanf("%d%d%d", &a,&b,&c)
#define lsc(a) scanf("%ld", &a)
#define lsc2(a,b) scanf("%ld%ld", &a,&b)
#define llsc(a) scanf("%lld", &a)
#define llsc2(a,b) scanf("%lld%lld", &a, &b)
#define llsc3(a,b,c) scanf("%lld%lld%lld", &a, &b, &c)
#define ullsc(a) scanf("%llu", &a)
#define ullsc2(a,b) scanf("%llu%llu", &a, &b)

#define ipf(a) printf("%d", a)
#define lpf(a) printf("%ld", a)
#define llpf(a) printf("%lld", a)

#define dsc(a) scanf("%lf", &a)

#define dpf2(a) printf("%.2f", a)
#define dpf3(a) printf("%.3f", a)

#define spf(a) printf("%s", a)
#define spf(a) printf("%s", a)

//Case printing
#define casepf(a) printf("Case %d:", a)
#define casestr(a, b) printf("Case %d: %s\n", a,b)

#define fl(a) floor(a)
#define cl(a) ceil(a)

#define mp(a,b) make_pair(a,b)

using namespace std;
typedef pair<int, int> pii;
typedef long long LL;
typedef pair<LL, LL> pLL;
typedef unsigned long long uLL;

template <class T>
inline T gcd(T x,T y){
    T mod;
    while(x%y){
        mod = x%y;
        x = y;
        y = mod;
    }
    return y;
}

int kdx[] = {2,2,-2,-2,1,-1,1,-1};
int kdy[] = {1,-1,1,-1,2,2,-2,-2};

int edx[] = {1,-1,0,0,1,1,-1,-1};
int edy[] = {0,0,1,-1,1,-1,1,-1};

int fdx[] = {1,-1,0,0};
int fdy[] = {0,0,1,-1};

int adj[102][102];
bool vis[102], flag;
int nodes, edges, tc, counter, src;

void dfs(int node, int p) {
	vis[node] = 1;
	for (int i =1; i<=nodes; i++) {
        if(flag) return;
	//	if (i == p && adj[node][i]<2) continue;
		if (adj[node][i]) {
			if (!vis[i]){
                dfs(i, node);
			}else {
                if(vis[i] && i==src){
                    counter++;
                    flag = 1;
                    return;
                }

			}
		}
	}

}

int main(){

    isc(tc);
    for(int i=1; i<=tc; i++){
        setz(adj);
        isc2(nodes, edges);
        while(edges--){
            int u, v;
            isc2(u,v);
            adj[u][v]++;
//            adj[v][u]++;
        }
        counter=0;
        for(int j=1; j<=nodes; j++){
            setz(vis);
            src = j;
            flag = 0;
            dfs(j, 0);
        }
        printf("Case %d: %d\n", i, nodes-counter);

    }

return 0;
}


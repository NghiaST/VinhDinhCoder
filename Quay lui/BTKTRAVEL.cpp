#include <iostream>
#include <queue>
#define getBIT(x,i) ((x>>i)&1)
#define setBIT(x,i) (x|(1<<i))
using namespace std;

long long n, res, cost[65536][16], a[16][16], dad[65536][16];
bool avail[65536][16];
queue<pair<int,int>> Q;

void Print(int d, int i) {
    if (d) Print(d - (1<<i), dad[d][i]); else return;
    cout << i+1 << ' ';
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin >> a[i][j];
    for(int i=0; i<(1<<n); i++)
        for(int j=0; j<n; j++) cost[i][j] = 1e15;
    for(int i=0; i<n; i++) Q.emplace(1<<i, i), cost[1<<i][i] = 0;
    while (!Q.empty()) {
        pair<int,int> e = Q.front(); Q.pop();
        int x = e.first, y = e.second;
        for(int i=0; i<n; i++) if (!getBIT(x, i)) {
            int v = setBIT(x, i);
            if (!avail[v][i]) Q.emplace(v, i), avail[v][i] = true;
            if (cost[v][i] > cost[x][y] + a[y][i]) {
                cost[v][i] = cost[x][y] + a[y][i];
                dad[v][i] = y;
            }
        }
    }
    int d = (1<<n) - 1;
    for(int i=1; i<n; i++) if (cost[d][res] > cost[d][i]) res = i;
    cout << cost[d][res] << '\n';
    //Print(d, res);
}
    

#include <iostream>
#include <queue>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;

const int GoX[] = {-1,0,1,1,1,0,-1,-1}, GoY[] = {-1,-1,-1,0,1,1,1,0};
int n, u1, u2, v1, v2, x1, x2, y1, y2, f[1005][1005];
queue<pair<int,int>> Q;

void Init(int u, int v) {
    FOR(i, 1, n) f[i][v] = f[u][i] = true;
    REP(i, 0, min(u, v)) f[u - i][v - i] = true;
    REP(i, 0, min(n-u, n-v)) f[u + i][v + i] = true;
    REP(i, 0, min(n-u, v)) f[u + i][v - i] = true;
    REP(i, 0, min(u, n-v)) f[u - i][v + i] = true;
}

void Process() {
    f[x1][y1] = 2, Q.emplace(x1, y1);
    while (!Q.empty()) {
        pair<int,int> v = Q.front(); Q.pop();
        REP(i, 0, 8) {
            int x = v.first + GoX[i];
            int y = v.second + GoY[i];
            if (x>0 && y>0 && x<=n && y<=n && !f[x][y]) {
                f[x][y] = 2;
                Q.emplace(x, y);
            }
        }
    }
}

int main()
{
    scanf("%d", &n);
    scanf("%d%d%d%d", &u1, &v1, &u2, &v2);
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    Init(u1, v1);
    Init(u2, v2);
    Process();
    if (f[x2][y2] == 2) cout << "YES\n"; else cout << "NO\n";
}
    

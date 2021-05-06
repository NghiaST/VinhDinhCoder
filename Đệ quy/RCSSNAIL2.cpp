#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1005
using namespace std;
const int Gx[] = {0,1,0,-1}, Gy[] = {1,0,-1,0};
int m, n, res, sum, f[N][N];

void visit(int x, int y) {
    f[x][y] = 1;
    sum++;
    REP(i, 0, 4) {
        int u = x + Gx[i];
        int v = y + Gy[i];
        if (u>0 && v>0 && u<=m && v<=n && !f[u][v]) visit(u,v);
    }
}

int main() {
    int x, y;
    scanf("%d%d", &m, &n);
    FOR(i, 1, m) FOR(j, 1, n) scanf("%d", &f[i][j]);
    FOR(i, 1, m) FOR(j, 1, n) if (!f[i][j]) {
        sum = 0;
        visit(i, j);
        if (res < sum) res = sum;
    }
    cout << res;
}
    

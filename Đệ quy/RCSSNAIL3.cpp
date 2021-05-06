#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1005
using namespace std;
const int Gx[] = {0,1,0,-1}, Gy[] = {1,0,-1,0};
int m, n, sum, f[N][N], cnt, Q[N*N];

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
    char c;
    scanf("%d%d\n", &m, &n);
    FOR(i, 1, m) {
        FOR(j, 1, n) f[i][j] = getchar() - '0', c = getchar();
        while (c != '\n') c = getchar();
    }
    FOR(i, 1, m) FOR(j, 1, n) if (!f[i][j]) {
        sum = 0;
        visit(i, j);
        cnt++;
        Q[sum]++;
    }
    cout << cnt << '\n';
    for(int i=1; cnt; i++) {
        cnt -= Q[i];
        while (Q[i]--) cout << i << ' ';
    }
}
    

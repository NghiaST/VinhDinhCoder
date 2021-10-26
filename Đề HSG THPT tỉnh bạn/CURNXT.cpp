#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
const int Gx[4] = {0, 1, 0, -1}, Gy[4] = {1, 0, -1, 0};
int m, n, mn, xa, ya, xb, yb, cnt, a[N][N], *b[N * N], avail[N][N], val[N][N];
vector<pair<int,int>> S[N * N];
queue<pair<int,int>> Q;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n >> xa >> ya >> xb >> yb;
    for(int i=1; i<=m; ++i)
    for(int j=1; j<=n; ++j) {
        cin >> a[i][j];
        avail[i][j] = a[i][j] != 0;
        b[++mn] = &a[i][j];
    }
    sort(b+1, b+mn+1, [] (int *x, int *y) { return *x < *y; });
    for(int i=1, old=0; i<=mn; ++i) {
        if (cnt==0 || *b[i] != old) ++cnt, old = *b[i];
        *b[i] = cnt;
    }
    for(int i=1; i<=m; ++i)
    for(int j=1; j<=n; ++j) {
        S[a[i][j]].emplace_back(i, j);
    }

    Q.emplace(xa, ya);
    avail[xa][ya] = 0;
    while (!Q.empty()) {
        pair<int,int> w = Q.front(); Q.pop();
        int x = w.first, y = w.second;
        if (x == xb && y == yb) break;
        for(int i=0; i<4; ++i) {
            int u = x + Gx[i];
            int v = y + Gy[i];
            if (avail[u][v]) {
                avail[u][v] = 0;
                val[u][v] = val[x][y] + 1;
                Q.emplace(u, v);
            }
        }
        int color = a[x][y];
        for(pair<int,int> z : S[color]) {
            int u = z.first, v = z.second;
            if (avail[u][v]) {
                avail[u][v] = 0;
                val[u][v] = val[x][y] + 1;
                Q.emplace(u, v);
            }
        }
        S[color].clear();
    }
    cout << val[xb][yb];
}
    

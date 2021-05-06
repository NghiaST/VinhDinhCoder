#include <iostream>
#include <queue>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1005
using namespace std;
const int Gx[] = {0,1,0,-1}, Gy[] = {1,0,-1,0};
char s[N][N];
int m, n, cnt, Rx, Ry, Jx, Jy, dad[N][N];

void BFS() {
    queue<pair<int,int>> Q;
    Q.emplace(Rx, Ry);
    while (!Q.empty()) {
        pair<int,int> w = Q.front(); Q.pop();
        REP(i, 0, 4) {
            int u = w.first + Gx[i];
            int v = w.second + Gy[i];
                if (u>0 && v>0 && u<=m && v<=n && !dad[u][v]) {
                dad[u][v] = i + 1;
                Q.emplace(u, v);
            }
        }
    }
}

void Print(int x, int y) {
    cnt++;
    if (s[x][y] == 'R') cout << cnt << '\n';
    else Print(x - Gx[dad[x][y] - 1], y - Gy[dad[x][y] - 1]);
    cout << x << ' ' << y << '\n';
}

int main() {
    int x, y;
    char c;
    scanf("%d%d\n", &m, &n);
    FOR(i, 1, m) scanf("%s", s[i] + 1);
    FOR(i, 1, m) FOR(j, 1, n) {
        switch (s[i][j]) {
            case 'R' : Rx = i, Ry = j, dad[i][j] = -1; break;
            case 'J' : Jx = i, Jy = j; break;
            case 'x' : dad[i][j] = -1; break;
            default : break;
        }
    }
    BFS();
    if (!dad[Jx][Jy]) { cout << "NO"; return 0; }
    cout << "YES\n";
    Print(Jx, Jy);
}
    

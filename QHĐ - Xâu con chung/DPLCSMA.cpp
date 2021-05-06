#include <iostream>
#include <cstring>
#define N 1005
#define REP(i, l, r) for(int i=l; i<r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
using namespace std;
char a[N], b[N], _next[N][N];
int n, m, f[N][N], G[N][N];
int res;

void Enter() {
    scanf("%s", &a); n = strlen(a);
    scanf("%s", &b); m = strlen(b);
}

void Process() {
    int v, pos;
    REPD(i, n, 0) {
        v = m;
        REPD(j, m, 0) {
            if (a[i] == b[j]) {
                f[i][j] = f[i+1][v] + 1;
                if (f[i][j] > f[i+1][j] || f[i][j] == f[i+1][j] && _next[i+1][j] <= b[v])
                    _next[i][j] = b[v], G[i][j] = v;
                    else _next[i][j] = _next[i+1][j];
            } else f[i][j] = f[i+1][j], _next[i][j] = _next[i+1][j];
            if (f[i+1][v] < f[i+1][j] || f[i+1][v] == f[i+1][j] && b[v] <= b[j]) v = j;
        }
    }
    ///
    int x = 0, y = 0;
    REP(j, 0, m) if (b[j] != '0') {
        if (res < f[0][j] || res == f[0][j] && b[y] < b[j]) {
            res = f[0][j];
            y = j;
        }
    }
    if (!res) {
        REP(j, 0, m) res = max(res, f[0][j]);
        if (!res) cout << "0\nLCS MAX NUMBER is NULL";
        else cout << "1\nLCS MAX NUMBER is 0";
        return;
    }
    cout << res << "\nLCS MAX NUMBER is ";
    while (res--) {
        while (!G[x][y]) x++;
        cout << b[y];
        y = G[x][y];
        x++;
    }
}

int main()
{
    Enter();
    Process();
}
    

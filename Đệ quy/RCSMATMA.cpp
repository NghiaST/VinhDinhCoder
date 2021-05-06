#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
const int Gx[] = {1,0,-1,0}, Gy[] = {0,1,0,-1};
int m, n, f[22][22], res;
char s[22][22];

void find_matma(int u, int v, int cnt) {
    f[u][v] = cnt;
    FOR(i, 0, 3) {
        int x = u + Gx[i];
        int y = v + Gy[i];
        if (!f[x][y] && s[u][v] <= s[x][y]) find_matma(x, y, cnt + 1);
    }
    res = max(res, f[u][v]);
    f[u][v] = 0;
}

int main()
{
    scanf("%d%d", &m, &n);
    FOR(i, 1, m) scanf("%s", s[i] + 1);
    FOR(i, 1, m) f[i][0] = f[i][n+1] = -1;
    FOR(i, 1, m) f[0][i] = f[m+1][i] = -1;
    FOR(i, 1, m) FOR(j, 1, n) find_matma(i, j, 1);
    cout << res;
}
    

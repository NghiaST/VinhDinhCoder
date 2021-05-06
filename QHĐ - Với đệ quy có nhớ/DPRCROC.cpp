#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
int t, n, v[205], f[205][205], g[205];
char s[205];

void Process() {
    FOR(i, 1, n) v[i] = v[i-1] + (s[i] == '1' ? 1 : -1);
    FOR(j, 1, n) FORD(i, j, 1) {
        if (v[j] - v[i-1] > 0) f[i][j] = j-i+1;
        else f[i][j] = max(f[i][j-1], f[i+1][j]);
    }
    FOR(j, 1, n) {
        g[j] = g[j-1];
        REP(i, 0, j) g[j] = max(g[j], g[i] + f[i+1][j]);
    }
    cout << g[n] << '\n';
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%s", &n, s+1);
        Process();
    }
}
    

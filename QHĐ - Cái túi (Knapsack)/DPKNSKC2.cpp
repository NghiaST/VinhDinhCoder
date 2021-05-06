#include <iostream>
#include <algorithm>
#define N 1005
#define M 11115
using namespace std;
int n, m, res, a[N], b[N], g[N];
long long f[N][M];
void Print(int x, int y) {
    if (!y) return;
    if (f[x][y] == f[x][y-1]) Print(x, y-1);
    else if (f[x][y] == f[x-1][y]) Print(x-1, y);
    else {
        g[x]++;
        Print(x, y-b[x]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> a[i] >> b[i];
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if (j<b[i]) f[i][j] = f[i-1][j];
            else f[i][j] = max(f[i-1][j], f[i][j - b[i]] + a[i]);
        }
    }
    Print(n, m);
    cout << f[n][m] << '\n';
    for(int i=1; i<=n; i++) cout << g[i] << ' ';
}
    

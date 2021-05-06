#include <iostream>
#define maxi(a,b,c) max(a,max(b,c))
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
const int N = 105;
int n, m, res, a[N][N], f[N][N][N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
    FOR(i, 1, n) FOR(j, 1, m) FOR(k, j, m) {
        FOR(w1, j-1, j+1) FOR(w2, k-1, k+1)
            f[i][j][k] = max(f[i][j][k], f[i-1][w1][w2]);
        if (j==k) f[i][j][k] += a[i][j];
        else f[i][j][k] += a[i][j] + a[i][k];
    }
    for(int i=1; i<=m; i++)
        for(int j=1; j<=m; j++)
            res = max(res, f[n][i][j]);
    cout << res;
}
    

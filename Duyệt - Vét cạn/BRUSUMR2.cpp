#include <iostream>
#include <algorithm>
#define N 705
#define FOR(i, l, r) for(long long i=l; i<=r; i++)
using namespace std;
int m, n, k;
long long f[N][N], res = -1e16;

int main() {
    scanf("%d", &m);
    scanf("%d", &n);
    scanf("%d", &k);
    int x;
    if (k > 1)
    FOR(i, 1, m) FOR(j, 1, n) {
        scanf("%d", &x);
        f[i][j] = f[i][j-1] + f[i-1][j] - f[i-1][j-1] + x;
        if (i>=k && j>=k)
            res = max(res, f[i][j] - f[i-k][j] - f[i][j-k] + f[i-k][j-k]
                        - (f[i-1][j-1] - f[i-1][j+1-k] - f[i+1-k][j-1] + f[i+1-k][j+1-k]));
    }
    else FOR(i, 1, m) FOR(j, 1, n) {
        scanf("%d", &x);
        res = max(res, (long long) x);
    }
    cout << res;
}
    

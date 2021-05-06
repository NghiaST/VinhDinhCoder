#include <iostream>
#define N 55
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;

int n, l, a[N], f[N][N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    while (cin >> l && l) {
        cin >> n;
        FOR(i, 1, n) cin >> a[i];
        a[n + 1] = l;
        FOR(i, 1, n) f[i][i+1] = a[i+1] - a[i-1];
        FOR(i, 2, n)
        FOR(j, 1, n - i + 1) {
            f[j][i + j] = 1e9;
            FOR(k, j, i + j - 1)
            f[j][i + j] = min(f[j][i + j],
                    f[j][k] + f[k + 1][i + j] + a[i + j] - a[j - 1]);
        }
        cout << f[1][n+1] << '\n';
    }
}
    

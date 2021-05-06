#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
const int mod = 1e9, N = 105;
int n, m, x, a[N][N], f[N][N], res;

int main()
{
    cin >> n >> m;
    FOR(i, 1, n) f[i][1] = 1;
    FOR(i, 1, n) FOR(j, 1, m) {
        cin >> x;
        a[i][j] = x;
        FOR(w1, 1, i) FORD(w2, min(j,m-1), 1)
            if (w1!=i||w2!=j) {
            if (__gcd(a[w1][w2], x) > 1)
                f[i][j] = (f[i][j] + f[w1][w2]) % mod;
            }
    }
    FOR(i, 1, n) res = (res + f[i][m]) % mod;
    cout << res;
}
    

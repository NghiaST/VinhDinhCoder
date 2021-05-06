#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
const int N = 505;
int t, n, m, a[N][N], f[N][N];

bool check(int x) {
    FOR(i, 1, n) f[i][0] = -1e7;
    FOR(i, 1, m) f[0][i] = -1e7;
    f[0][1] = x;
    FOR(i, 1, n) FOR(j, 1, m) {
        f[i][j] = max(f[i-1][j], f[i][j-1]) + a[i][j];
        if (f[i][j] <= 0) f[i][j] = -1e7;
    }
    return f[n][m] > 0;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> m;
        FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
        int l=1, r=500000, mid;
        while (l<r) {
            mid = (l+r) / 2;
            if (check(mid)) r = mid; else l = mid+1;
        }
        cout << l << '\n';
    }
}
    

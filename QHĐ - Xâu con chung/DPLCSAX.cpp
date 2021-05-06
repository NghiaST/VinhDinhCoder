#include <iostream>
using namespace std;
int t, n, m, res, x, f[2005][2005], a[2005], b[2005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        n = res = 0;
        while (cin >> x, x!=0) a[++n] = x;
        while (cin >> x, x!=0) {
            m = 0;
            b[++m] = x;
            while (cin >> x, x!=0) b[++m] = x;
            for(int i=1; i<=n; i++)
            for(int j=1; j<=m; j++) {
                if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
                else f[i][j] = max(f[i-1][j], f[i][j-1]);
            }
            res = max(res, f[n][m]);
        }
        cout << res << '\n';
    }
}
    

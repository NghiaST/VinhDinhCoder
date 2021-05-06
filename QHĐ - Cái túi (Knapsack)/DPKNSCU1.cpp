#include <iostream>
using namespace std;
int t, n, m, x, f[2025][2025];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> m;
        for(int i=2; i<=n+1; i++) {
            cin >> x;
            for(int j=0; j<=m; j++) {
                f[i][j] = f[i-1][j];
                if (j>=x) f[i][j] = max(f[i][j], f[i-2][j-x] + x);
            }
        }
        cout << f[n+1][m] << ' ';
    }
}
    

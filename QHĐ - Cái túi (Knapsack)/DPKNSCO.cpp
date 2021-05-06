#include <iostream>
using namespace std;
int t, m, n, x, f[1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    f[0] = 0;
    while (t--) {
        cin >> m >> n;
        for(int i=1; i<=m; i++) f[i] = 1000000000;
        while (n--) {
            cin >> x;
            for(int i=x; i<=m; i++) f[i] = min(f[i], f[i-x] + 1);
        }
        if (f[m] != 1e9) cout << f[m] << '\n';
        else cout << -1 << '\n';
    }
}
    

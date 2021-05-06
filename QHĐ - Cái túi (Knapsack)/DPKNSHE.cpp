#include <iostream>
using namespace std;
int t, e1, e2, n, m, v, w, f[10005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> e1 >> e2 >> n;
        m = e2-e1;
        fill(f+1, f+m+1, 1e9);
        while (n--) {
            cin >> v >> w;
            for(int i=w; i<=m; i++)
                f[i] = min(f[i], f[i-w] + v);
        }
        if (f[m] < 1e9) cout << f[m] << '\n'; else cout << "-1\n";
    }
}
    

#include <iostream>
#include <cstring>
using namespace std;
int t, n, m, f[305][305];
char a[305], b[305];

void Trace(int x, int y) {
    if (!x && !y) return;
    if (x && y && a[x] == b[y]) {
        Trace(x-1, y-1);
        cout << a[x];
        return;
    }
    if (!y || x && f[x][y] == f[x-1][y]) {
        Trace(x-1, y);
        cout << a[x];
    } else {
        Trace(x, y-1);
        cout << b[y];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> a+1 >> b+1;
        n = strlen(a+1); m = strlen(b+1);
        for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++) {
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1] + 1;
            else f[i][j] = max(f[i][j-1], f[i-1][j]);
        }
        Trace(n, m);
        cout << '\n';
    }
}
    

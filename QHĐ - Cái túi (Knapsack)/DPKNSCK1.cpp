#include <iostream>
#include <algorithm>
#define N 1005
using namespace std;
int n, m, a[N], b[N], f[N][N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> a[i] >> b[i];
    for(int i=1; i<=n; i++) {
        for(int j=0; j<=m; j++) {
            if (j<b[i]) f[i][j] = f[i-1][j];
            else f[i][j] = max(f[i-1][j], f[i-1][j - b[i]] + a[i]);
        }
    }
    cout << f[n][m];
}
    

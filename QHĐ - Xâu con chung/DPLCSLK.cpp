#include <iostream>
#include <cstring>
using namespace std;
int n, m, f[1005][1005], a[1005], b[1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=m; i++) cin >> b[i];

    for(int i=1; i<=n; i++)
    for(int j=1; j<=m; j++) {
        if (a[i] == b[j]) f[i][j] = (i==1 || j==1 ? 1 : f[i-2][j-2] + 1);
        else f[i][j] = max(f[i][j-1], f[i-1][j]);
    }
    cout << f[n][m] << '\n';
}
    

#include <iostream>
using namespace std;
const int mod = 1e9+7;
int m, n, p, x, y, f[1005][1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n >> p;
    while (p--) {
        cin >> x >> y;
        f[x][y] = 1;
    }
    f[0][1] = 1;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++)
        if (f[i][j]) f[i][j] = 0;
         else f[i][j] = (f[i-1][j] + f[i][j-1]) % mod;
    cout << f[m][n];
}
    

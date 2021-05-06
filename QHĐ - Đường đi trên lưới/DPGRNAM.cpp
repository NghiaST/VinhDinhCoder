#include <iostream>
using namespace std;
const int mod = 1e7;
int m, n, f[505][505], d[505][505];

int get123() {
    f[0][1] = 1;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++)
        if (d[i][j]>=0) f[i][j] = (f[i-1][j] + f[i][j-1]) % mod;
         else f[i][j] = 0;
    return f[m][n];
}

int get(int x) {
    f[0][1] = 1;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++)
        if (d[i][j]==0 || d[i][j]==x) f[i][j] = (f[i-1][j] + f[i][j-1]) % mod;
         else f[i][j] = 0;
    return f[m][n];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++) cin >> d[i][j];
    cout << (get123() - get(1) - get(2) - get(3) + mod*5) % mod;
}
    

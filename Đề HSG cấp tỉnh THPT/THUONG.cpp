#include <iostream>
using namespace std;
int m, n, res, a[305][305];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=m; ++i)
    for(int j=1; j<=n; ++j) cin >> a[i][j];
    for(int i=0; i<=n; ++i) a[0][i] = a[m+1][i] = -0x3c3c3c3c;
    for(int j=2; j<=n; ++j)
    for(int i=1; i<=m; ++i)
        a[i][j] += max(a[i-1][j-1], max(a[i][j-1], a[i+1][j-1]));
    res = -0x3c3c3c3c;
    for(int i=1; i<=m; ++i) res = max(res, a[i][n]);
    cout << res;
}
    

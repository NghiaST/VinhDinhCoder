#include <iostream>
#define maxi(x,y,z) max(x,max(y,z))
using namespace std;
int m, n, x;
long long res = -1e15, f[1005][1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=n; i++) f[0][i] = f[m+1][i] = -1e15;
    for(int i=1; i<=m; i++) for(int j=1; j<=n; j++) cin >> f[i][j];
    for(int j=1; j<=n; j++)
    for(int i=1; i<=m; i++) {
        f[i][j] += maxi(f[i-1][j-1], f[i][j-1], f[i+1][j-1]);
    }
    for(int i=1; i<=m; i++) res = max(res, f[i][n]);
    cout << res;
}
    

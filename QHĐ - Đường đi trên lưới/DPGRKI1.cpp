#include <iostream>
#define maxi(x,y,z) max(x,max(y,z))
using namespace std;
int m, n, x;
long long res, f[1005][1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=m; i++) f[i][0] = f[i][n+1] = -1e15;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++) {
        cin >> x;
        f[i][j] = maxi(f[i-1][j-1], f[i-1][j], f[i-1][j+1]) +  x;
    }
    for(int i=1; i<=n; i++) res = max(res, f[m][i]);
    cout << res;
}
    

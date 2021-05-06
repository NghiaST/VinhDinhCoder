#include <iostream>
using namespace std;
int m, n, X, Y, x;
long long f[1005][1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n >> X >> Y;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++) {
        cin >> x;
        if (i==X && j==Y) f[i][j] = x;
            else f[i][j] = max(f[i-1][j], f[i][j-1]) - x;
    }
    if (f[m][n]>=0) cout << "Y " << f[m][n]; else cout << "N";
}
    

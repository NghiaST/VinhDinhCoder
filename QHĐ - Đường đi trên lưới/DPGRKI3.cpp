#include <iostream>
#define maxi(x,y,z) max(x,max(y,z))
using namespace std;
int m, n, x, prv[1005][1005];
long long f[1005][1005];

void Print(int x, int y) {
    if (x==1 && y==1) cout << f[m][n] << '\n' << m+n-1 << '\n';
    else Print(x - prv[x][y], y - (prv[x][y]^1));
    cout << x << ' ' << y << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=m; i++) f[i][0] = -1e15;
    for(int i=1; i<=n; i++) f[0][i] = -1e15;
    f[0][1] = 0;
    for(int i=1; i<=m; i++)
    for(int j=1; j<=n; j++) {
        cin >> x;
        if (f[i-1][j] > f[i][j-1]) {
            prv[i][j] = 1;
            f[i][j] = f[i-1][j] + x;
        } else {
            prv[i][j] = 0;
            f[i][j] = f[i][j-1] + x;
        }
    }
    Print(m, n);
}
    

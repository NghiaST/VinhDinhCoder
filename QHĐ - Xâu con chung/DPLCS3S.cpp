#include <iostream>
#include <cstring>
#define same(a,b,c) (a==b && b==c)
#define mmax(a,b,c) (max(a,max(b,c)))
using namespace std;
int t, n, m, p, f[105][105][105];
char a[105], b[105], c[105];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> m >> p;
        cin >> a+1 >> b+1 >> c+1;
        for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
        for(int k=1; k<=p; k++) {
            if (same(a[i], b[j], c[k])) f[i][j][k] = f[i-1][j-1][k-1] + 1;
            else f[i][j][k] = mmax(f[i][j][k-1], f[i][j-1][k], f[i-1][j][k]);
        }
        cout << f[n][m][p] << '\n';
    }
}
    

#include <iostream>
#include <cstring>
using namespace std;
int n, m, f[5005][5005];
char a[5005], b[5005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> a+1 >> b+1;
    n = strlen(a+1);
    m = strlen(b+1);
    for(int i=1; i<=n; i++) f[i][0] = i;
    for(int i=1; i<=m; i++) f[0][i] = i;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++) {
            if (a[i] == b[j]) f[i][j] = f[i-1][j-1];
            else f[i][j] = min(min(f[i][j-1], f[i-1][j]) + 1, f[i-1][j-1] + 2);
        }
    }
    cout << f[n][m];
}
    

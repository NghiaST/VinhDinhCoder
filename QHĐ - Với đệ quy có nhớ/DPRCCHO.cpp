#include <iostream>
using namespace std;
int n, m, k;
long long vmax, a[6005], f[6005][6005];

int main()
{
    scanf("%d%d%d", &n, &m, &k);
    for(int i=1; i<=n; i++) scanf("%lld", &a[i]), a[i] += a[i-1];
    for(int i=m; i<=n; i++) {
        vmax = a[i] - a[i-m];
        for(int j=min(i/m, k); j; j--) f[i][j] = max(f[i-1][j], f[i-m][j-1] + vmax);
    }
    cout << f[n][k];
}
    

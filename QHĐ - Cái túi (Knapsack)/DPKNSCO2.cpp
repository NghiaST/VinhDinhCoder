#include <iostream>
using namespace std;
int n, vmax, a[505], f[250505], prv[250505];
long long m, res, Count[505];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for(int i=1; i<=n; i++) cin >> a[i], vmax = (a[i] > a[vmax] ? i : vmax);
    Count[vmax] = max(0ll, (m - a[vmax] * a[vmax]) / a[vmax]);
    m -= Count[vmax] * a[vmax];
    fill(f+1, f+m+1, 1000000000);
    for(int i=1; i<=n; i++)
    for(int j=a[i]; j<=m; j++)
        if (f[j] > f[j-a[i]] + 1) {
            f[j] = f[j-a[i]] + 1;
            prv[j] = i;
        }
    if (f[m] >= 1e9) { cout << -1; return 0; }
    cout << Count[vmax] + f[m] << '\n';
    while (m) {
        Count[prv[m]]++;
        m -= a[prv[m]];
    }
    for(int i=1; i<=n; i++) cout << Count[i] << ' ';
}
    

#include <iostream>
using namespace std;
const int N = 100005;
int n, m, a[N];
long long ans, res, f[N], cnt[N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; ++i) cin >> a[i];
    for(int i=2; i<=n; ++i) {
        if (a[i] < a[i-1]) ans += a[i] - a[i-1] + m;
        else ans += a[i] - a[i-1];
    }
    for(int i=2; i<=n; ++i) {
        if (a[i] == a[i-1]) continue;
        ++cnt[a[i-1] + 2];
        --cnt[a[i] + 1];
        if (a[i] < a[i-1]) {
            ++cnt[0];
            f[0] += m - a[i-1] - 1;
            f[a[i] + 1] -= m + a[i] - a[i-1] - 1;
        }
        else f[a[i] + 1] -= a[i] - a[i-1] - 1;
    }
    for(int i=1; i<=m; ++i) {
        cnt[i] += cnt[i-1];
        f[i] += f[i-1] + cnt[i];
    }
    res = 1e15;
    for(int i=1; i<=m; ++i) res = min(res, ans - f[i]);
    cout << res;
}

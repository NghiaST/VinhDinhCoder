#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n, m, cnt, a[N], b[N], *c[N*2], d[N*2], p[N*2];
int res, res2;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=m; ++i) cin >> a[i] >> b[i], --a[i];
    for(int i=1; i<=m; ++i) c[i] = &a[i], c[i+m] = &b[i];
    sort(c+1, c+m*2+1, [] (int *x, int *y) { return *x < *y; });
    for(int i=1; i<=m*2; ++i) {
        if (*c[i] != p[cnt]) p[++cnt] = *c[i];
        *c[i] = cnt;
    }
    if (p[cnt] != n) p[++cnt] = n;
    for(int i=1; i<=m; ++i) {
        ++d[b[i]]; --d[a[i]];
        if (a[i] >= b[i]) ++d[cnt];
    }
    for(int i=cnt; i; --i) {
        d[i] += d[i+1];
        res = max(res, d[i]);
    }
    for(int i=cnt; i; --i) if (res == d[i]) res2 += p[i] - p[i-1];
    cout << res << ' ' << res2;
}
    

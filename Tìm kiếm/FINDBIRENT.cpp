#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
long long n, m, k, a[N], b[N];

long long get_val(int x) {
    long long v = 0;
    FOR(i, 1, x) v += max(0ll, b[i] - a[n - x + i]);
    return v;
}

int main() {
    scanf("%lld%lld%lld", &n, &m, &k);
    FOR(i, 1, n) scanf("%lld", &a[i]);
    FOR(i, 1, m) scanf("%lld", &b[i]);
    sort(a+1, a+n+1);
    sort(b+1, b+m+1);
    int l = 0, r = min(n, m), mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (get_val(mid) <= k) l = mid; else r = mid-1;
    }
    cout << l << ' ' << get_val(l);
}
    

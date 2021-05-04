#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
#define ll long long
using namespace std;
ll n, k, vmax, a[N];

ll get_val(ll x) {
    ll v = 0;
    FOR(i, 1, n) v += min(x, a[i]);
    return v;
}

void Enter() {
    scanf("%lld%lld", &n, &k);
    FOR(i, 1, n) scanf("%lld", &a[i]), vmax = max(a[i], vmax);
}

int get_pos() {
    int l = 0, r = vmax, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (get_val(mid) <= k) l = mid; else r = mid-1;
    }
    return l;
}

void Process() {
    ll p = get_pos();
    ll cnt = k - get_val(p);
    if (p == vmax) {
        if (!cnt) cout << "OK"; else cout << cnt;
        return;
    }
    int i=1;
    for(; cnt; i++) if (a[i] > p) cnt--;
    FOR(j, i, n) if (a[j] > p) cout << j << ' ';
    p++;
    REP(j, 1, i) if (a[j] > p) cout << j << ' ';
}

int main() {
    Enter();
    Process();
}
    

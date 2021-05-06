#include <iostream>
#include <algorithm>
using namespace std;
int n, c, d[5], res;
struct Data{
    int color, val;
    bool operator < (const Data &other) const {
        return d[color] < d[other.color] ||
        d[color] == d[other.color] && val < other.val;
    }
} a[100005], Q[100005];

void Enter() {
    cin >> c >> n;
    n *= c;
    for(int i=1; i<=n; i++) cin >> a[i].color >> a[i].val;
}

void _next() {
    int p1 = c-1, p2 = c;
    while (d[p1] > d[p1+1]) p1--;
    while (d[p1] > d[p2]) p2--;
    swap(d[p1++], d[p2]);
    p2 = c;
    while (p1 < p2) swap(d[p1++], d[p2--]);
}

void solve() {
    int r = 0;
    for(int i=1; i<=n; i++) {
        if (!r || Q[r] < a[i]) Q[++r] = a[i];
        else *upper_bound(Q, Q+r+1, a[i]) = a[i];
    }
    res = max(res, r);
}

void Process() {
    int z = 1;
    for(int i=1; i<=c; i++) z*=i, d[i] = i;
    while (z--) {
        solve();
        if (z) _next();
    }
    cout << n - res;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    Enter();
    Process();
}
    

#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 10005
using namespace std;
long long n, f[2][N], res = 1e10;
struct Data {
    long long acr, cost, pos;
    bool operator < (Data &other) { return acr < other.acr || acr == other.acr && pos > other.pos; }
} a[N];

void Enter() {
    scanf("%lld", &n);
    FOR(i, 1, n) scanf("%lld", &a[i].acr);
    FOR(i, 1, n) scanf("%lld", &a[i].cost), a[i].pos = i;
    sort(a + 1, a + n + 1);
}

void update(int x, long long val, int d) {
    for(x++; x <= n; x += x&-x) f[d][x] = min(f[d][x], val);
}

long long getBIT(int x, int d) {
    long long val = 1e10;
    for(; x; x -= x&-x) val = min(val, f[d][x]);
    return val;
}

void Process() {
    FOR(i, 0, 1) FOR(j, 1, n) f[i][j] = 1e10;
    FOR(i, 1, n) {
        update(a[i].pos, a[i].cost, 0);
        long long x1 = getBIT(a[i].pos, 0);
        if (x1 == 1e10) continue;
        update(a[i].pos, a[i].cost + x1, 1);
        long long x2 = getBIT(a[i].pos, 1);
        if (x2 == 1e10) continue;
        res = min(res, x2 + a[i].cost);
    }
    if (res == 1e10) res = -1;
    cout << res;
}

int main() {
    Enter();
    Process();
}
    

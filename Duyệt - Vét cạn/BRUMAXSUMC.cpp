#include <iostream>
#include <algorithm>
#define N 200005
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int n, m, l, r, a[N], d[N], f[N];
long long res;

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

int getBIT(int x) { int val = 0; for(; x <= n; x += x&-x) val += f[x]; return val; }
void update(int x, int val) { for(; x; x -= x&-x) f[x] += val; }

int main() {
    ReadInt(n);
    ReadInt(m);
    FOR(i, 1, n) ReadInt(a[i]);
    while (m--) {
        ReadInt(l);
        ReadInt(r);
        update(r, 1);
        update(l-1, -1);
    }
    FOR(i, 1, n) d[i] = getBIT(i);
    sort(a+1, a+n+1);
    sort(d+1, d+n+1);
    FOR(i, 1, n) res += 1ll * a[i] * d[i];
    cout << res;
}
    

#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 300005
using namespace std;
long long n, k, r, p, res, a[N], b[N];

int main() {
    scanf("%lld%lld", &n, &k);
    long long x;
    FOR(i, 1, n) {
        scanf("%lld", &x);
        long long q = 1;
        while (q <= x) q <<= 1; q>>=1;
        do {
            a[++r] = (x&q) != 0;
            q>>=1;
        } while (q);
    }
    a[0] = -1;
    if (a[1] == 0) ++p;
    FOR(i, 1, r) {
        if (a[i] == a[i-1]) b[p] = i;
        else b[++p] = i;
    }
    FOR(i, 1, p)
        if (i & 1) res = max(res, b[i] - b[max(0ll, i-k*2-1)]);
        else res = max(res, b[i] - b[max(0ll, i-k*2)]);
    cout << res;
}
    

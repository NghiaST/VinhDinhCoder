#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
long long n, k, l, res, a[N];

int main() {
    scanf("%lld%lld", &n, &k);
    res = n + 1;
    long long x;
    FOR(i, 1, n) {
        scanf("%lld", &x);
        int r = 0;
        while (x) {
            if (x&1) a[i]++;
            x>>=1;
        }
    }
    FOR(i, 1, n) a[i] += a[i-1];
    FOR(i, 1, n) {
        while (a[i] - a[l+1] >= k) l++;
        if (a[i] - a[l] >= k) res = min(res, i - l);
    }
    if (res == n+1) cout << -1; else cout << res;
}
    

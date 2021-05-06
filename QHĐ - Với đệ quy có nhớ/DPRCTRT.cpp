#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
long long n, cnt, a[105], f[105][105], avail[105][105];

long long get_val(int l, int r) {
    if (l > r) return 0;
    if (avail[l][r] == cnt) return f[l][r];
    avail[l][r] = cnt;
    long long sum = 0;
    f[l][r] = -1e15;
    FOR(i, l, r) {
        sum += a[i];
        f[l][r] = max(f[l][r], sum - get_val(i+1, r));
    }
    sum = 0;
    FORD(i, r, l) {
        sum += a[i];
        f[l][r] = max(f[l][r], sum - get_val(l, i-1));
    }
    return f[l][r];
}

int main()
{
    while (scanf("%lld", &n), n) {
        FOR(i, 1, n) scanf("%lld", &a[i]);
        ++cnt;
        cout << get_val(1, n) << '\n';
    }
}
    

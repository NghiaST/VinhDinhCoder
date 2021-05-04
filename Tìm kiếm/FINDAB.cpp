#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
long long n, res, a[N], b[N];

int main() {
    scanf("%lld", &n);
    FOR(i, 1, n) scanf("%lld", &a[i]);
    FOR(i, 1, n) scanf("%lld", &b[i]);
    sort(b + 1, b + n + 1);
    FOR(i, 1, n) {
        int x = lower_bound(b+1, b+n, a[i]) - b;
        if (b[x] == a[i]) res++;
    }
    cout << res;
}
    

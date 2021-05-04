#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 1000005
using namespace std;
int n, q;
long long a[N];

void Process(long long L, long long R) {
    int pos1 = upper_bound(a + L, a + R, (a[L] + a[R]) / 2) - a;
    int pos2 = (pos1 > L ? pos1 - 1 : pos1);
    cout << min(a[pos1]*2 - a[R] - a[L], a[R] + a[L] - a[pos2]*2) << '\n';
}

int main() {
    scanf("%d%d", &n, &q);
    long long x, l, r;
    FOR(i, 1, n) scanf("%lld", &x), a[i] = a[i-1] + x;
    while (q--) {
        scanf("%lld%lld", &l, &r);
        Process(l - 1, r);
    }
}
    

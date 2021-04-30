#include <iostream>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 5570
using namespace std;
llong n, n1, a[N], ok[N];

void eratos1() {
    a[1] = true;
    FOR(i,2,5569) if (!a[i]) {
        FOR(j,i,5569/i) a[i*j] = true;
    }
}

void eratos2() {
    n1 = max(0ll, n - 5569ll);
    for(llong i=2; i*i <=n; i++) {
        for(llong j = max((n1 + i - 1) / i * i, i*i); j <= n; j+=i) ok[j - n1] = true;
    }
}

void Process() {
    if (n < 4) { cout << -1; return; }
    FOR(i,1,5569) {
        if (!a[i] && !ok[n - i - n1]) {
            cout << i << ' ' << n-i;
            return;
        }
    }
}

int main()
{
    scanf("%I64d", &n);
    eratos1();
    eratos2();
    Process();
}
    

#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 20005
using namespace std;
long long l, r, n, res, f[N];

void eratos() {
    int NN = r;
    FOR(i,2,NN) {
        f[i]--;
        FOR(j, 2, NN / i) f[i*j] -= f[i];
    }
}

int main() {
    scanf("%I64d%I64d%I64d", &l, &r, &n);
    l = (l-1) / n; r /= n;
    n = r - l;
    eratos();
    res = pow(n, 4);
    FOR(i, 2, r) res += pow((r/i - l/i), 4) * f[i];
    cout << res;
}
    

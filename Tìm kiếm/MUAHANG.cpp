#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 1000005
using namespace std;
int n, a[N], vmax;
long long c[N], q[N], sum, k;

void Enter() {
    scanf("%d%lld", &n, &k);
    FOR(i, 1, n) scanf("%d", &a[i]), q[a[i]]++, vmax = max(a[i], vmax);
    FOR(i, 1, vmax)  sum += q[i]*i, q[i] += q[i-1], c[i] = sum + (n - q[i]) * i;
    c[vmax + 1] = c[vmax];
}

void Process() {
    int l = 1, r = vmax + 1, mid;
    while (l < r) {
        mid = (l + r) / 2;
        if (c[mid] >= k) r = mid; else l = mid + 1;
    }
    if (l <= vmax) cout << l; else cout << -1;
}

int main() {
    Enter();
    Process();
}
    

#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
using namespace std;
int n, a[N], vmax;
long long k;

void Enter() {
    scanf("%d%lld", &n, &k);
    FOR(i, 1, n) scanf("%d", &a[i]), vmax = max(a[i], vmax);
}

bool check(int x) {
    long long cnt = 0;
    FOR(i, 1, n) cnt += a[i] / x;
    return cnt >= k;
}

void Process() {
    int l = 0, r = vmax, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (check(mid)) l = mid; else r = mid - 1;
    }
    cout << l;
}

int main() {
    Enter();
    Process();
}
    

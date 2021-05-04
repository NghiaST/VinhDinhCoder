#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
using namespace std;
int t, n, m, a[N], b[N];

void Enter() {
    scanf("%d%d", &t, &n);
    FOR(i, 1, n) scanf("%d", &a[i]);
    scanf("%d", &m);
    FOR(i, 1, m) scanf("%d", &b[i]);
}

long long get_counta(int x) {
    long long cnt = 0;
    FOR(i, 1, n) cnt += x / a[i];
    return cnt;
}

long long get_countb(int x) {
    long long cnt = 0;
    FOR(i, 1, m) cnt += x / b[i];
    return cnt;
}

void Process() {
    int l = 0, r = t, mid;
    while (l < r) {
        mid = (l + r + 1) / 2;
        if (get_countb(mid) <= get_counta(t - mid)) l = mid; else r = mid - 1;
    }
    cout << max(get_countb(l), get_counta(t - l - 1));
}

int main() {
    Enter();
    Process();
}
    

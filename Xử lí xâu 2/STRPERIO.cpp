#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 200005
using namespace std;
int n, k, f[N];
char s[N];

void Init() {
    REP(i, 0, n) f[i] = s[i] - '0';
    int r = n-1;
    f[r]++;
    while (r >= 0 && f[r] > 9) {
        f[r] = 0;
        if (r--) f[r]++;
    }
    if (r < 0 || n%k) {
        n = (n/k + 1)*k;
        f[0] = 1;
        REP(i, 1, n) f[i] = 0;
    }
}

void solve() {
    int ok = 0;
    REP(i, k, n) if (f[i - k] != f[i]) { ok = (f[i-k] < f[i]); break; }
    int r = k-1;
    f[r] += ok;
    while (f[r] > 9) f[r] = 0, f[--r]++;
    REP(i, k, n) f[i] = f[i - k];
}

int main() {
    scanf("%d%s", &k, &s); n = strlen(s);
    Init();
    solve();
    REP(i, 0, n) cout << f[i];
}
    

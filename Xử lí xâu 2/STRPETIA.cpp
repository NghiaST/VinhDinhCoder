#include <iostream>
#include <cstring>
#include <queue>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
#define N 100005
using namespace std;
int t, n, n2, ok, v[256];
char s[N], s2[N];

void solve() {
    if (n == n2) {
        REP(i, 0, n) {
            if (s[i] != s2[i]) {
                if (s[i] == '?' && v[s2[i]]) continue;
                if (s[i] == '*' && !v[s2[i]]) continue;
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    } else if (ok && n - 1 <= n2) {
        int p = 0;
        int sl = n2 - n;
        REP(i, 0, n2) {
            if (!p && s[i] == '*') {
                REP(j, 0, n2 - n + 1) if (v[s2[i + j]]) { cout << "NO\n"; return; }
                p = n - n2;
                i += n2 - n + 1;
            }
            if (s[i + p] != s2[i]) {
                if (s[i + p] == '?' && v[s2[i]]) continue;
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }
    else cout << "NO\n";
}

int main() {
    scanf("%s", &s);
    REPD(i, strlen(s), 0) v[s[i]] = 1;
    scanf("%s%d", &s, &t); n = strlen(s);
    REP(i, 0, n) if (s[i] == '*') ok = 1;
    while (t--) {
        scanf("%s", &s2); n2 = strlen(s2);
        solve();
    }
}
    

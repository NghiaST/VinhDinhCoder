#include <iostream>
#include <cstring>
#include <queue>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REPD(i, r, l) for(int i=r-1; i>=l; i--)
#define N 55
using namespace std;
int t, n, f[26];
char s1[N], s2[N];
queue<pair<int,int>> Q;

void Process() {
    fill(f, f + 26, 0);
    REP(i, 0, n) f[s1[i] - 'a']++, f[s2[i] - 'a']++;
    REP(i, 0, 26) if (f[i] & 1) { cout << "No\n"; return; }
    cout << "Yes\n";
    REP(i, 0, n) {
        if (s1[i] == s2[i]) continue;
        REP(j, i+1, n) if (s1[i] == s1[j]) {
            Q.emplace(j, i);
            swap(s1[j], s2[i]);
            break;
        }
        if (s1[i] == s2[i]) continue;
        REP(j, i+1, n) if (s1[i] == s2[j]) {
            Q.emplace(i + 1, j);
            Q.emplace(i + 1, i);
            swap(s1[i + 1], s2[j]);
            swap(s1[i + 1], s2[i]);
            break;
        }
    }
    cout << Q.size() << '\n';
    while (!Q.empty()) cout << Q.front().first + 1 << ' ' << Q.front().second + 1 << '\n', Q.pop();
}

int main() {
    scanf("%d", &t);
    while (t--) {
        scanf("%d%s%s", &n, &s1, &s2);
        Process();
    }
}
    

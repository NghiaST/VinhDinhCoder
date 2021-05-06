#include <iostream>
#include <cstring>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 5005
using namespace std;
int n;
char f[256], s1[N], s2[N];
pair<int,int> Q[N];

void Process() {
    int res = 0;
    REP(i, 0, n) {
        if (f[s2[i]] && f[s2[i]] != s1[i] || f[s1[i]] && f[s1[i]] != s2[i]) {
            cout << -1;
            return;
        }
        f[s2[i]] = s1[i];
        f[s1[i]] = s2[i];
    }
    FOR(i, 'a', 'z') if (f[i] > i) res++;
    cout << res << '\n';
    FOR(i, 'a', 'z') if (f[i] > i) cout << (char)i << ' ' << f[i] << '\n';
}

int main() {
    scanf("%s%s", &s1, &s2);
    n = strlen(s1);
    Process();
}
    

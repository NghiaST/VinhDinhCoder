#include <iostream>
#include <cstring>
#include <vector>
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 10005
using namespace std;
int n1, n2, res, _next[N][130];
char s1[10005], s2[1000005];
vector<int> Q[130];

void Process() {
    REP(i, 0, n1) Q[s1[i]].push_back(i);
    FOR(i, 'a', 'z') {
        int val = Q[i].size();
        if (!val) {
            REP(j, 0, n1) _next[j][i] = -1;
            continue;
        }
        REP(w, 1, val) REP(j, Q[i][w-1], Q[i][w])
            _next[j][i] = Q[i][w];
        REP(j, Q[i][val-1], n1) _next[j][i] = Q[i][0];
        REP(j, 0, Q[i][0]) _next[j][i] = Q[i][0];
    }
}

int main() {
    scanf("%s%s", &s1, &s2);
    n1 = strlen(s1);
    n2 = strlen(s2);
    Process();
    int now = n1-1;
    REP(i, 0, n2) {
        if (now >= _next[now][s2[i]]) res++;
        now = _next[now][s2[i]];
        if (now < 0) {
            cout << -1;
            return 0;
        }
    }
    cout << res;
}
    

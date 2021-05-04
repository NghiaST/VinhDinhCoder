#include <iostream>
#include <algorithm>
#include <cstring>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define N 100005
using namespace std;
char s[N];
int n, vmax, ra, rb, a[N], b[N], fa[N], fb[N], res;
pair<int, int> ans[N];

void Init() {
    REP(i, 0, n) {
        a[i+1] = a[i];
        b[i+1] = b[i];
        if (s[i] == 'S') {
            fa[++ra] = i+1;
            ++a[i+1];
        } else {
            fb[++rb] = i+1;
            ++b[i+1];
        }
    }
}

void Process() {
    int pa, pb;
    FOR(i, 1, max(ra, rb)) {
        int pos = 0, teama = 0, teamb = 0, finish = 0;
        while (pos < n) {
            if (a[pos] + i > ra && b[pos] + i > rb) break;
            if (a[pos] + i <= ra) pa = fa[a[pos] + i]; else pa = n+1;
            if (b[pos] + i <= rb) pb = fb[b[pos] + i]; else pb = n+1;
            if (pa < pb) teama++, pos = pa, finish = -1; else teamb++, pos = pb, finish = 1;
        }
        if (pos == n && teama*finish < teamb*finish) ans[++res] = {max(teama, teamb), i};
    }
    if (!res) cout << "ERROR";
    else {
        sort(ans+1, ans+res+1);
        FOR(i, 1, res) cout << ans[i].first << ' ' << ans[i].second << '\n';
    }
}

int main() {
    scanf("%s", &s); n = strlen(s);
    Init();
    Process();
}
    

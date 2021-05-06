#include <iostream>
#include <cstring>
#include <vector>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
int t, n, res, cnt[26], _size[26];
char s[200005];
vector<int> f[26];

int main() {
    scanf("%d%s%d", &n, &s, &t);
    REP(i, 0, 26) f[i].push_back(0);
    REP(i, 0, n) f[s[i] - 'a'].push_back(i+1);
    REP(i, 0, 26) _size[i] = f[i].size() - 1;
    while (t--) {
        REP(i, 0, 26) cnt[i] = 0;
        scanf("%s", &s); n = strlen(s);
        while (n--) cnt[s[n] - 'a']++;
        res = 0;
        REP(i, 0, 26) {
            if (cnt[i] > _size[i]) { res = -1; break; }
            res = max(res, f[i][cnt[i]]);
        }
        cout << res << '\n';
    }
}
    

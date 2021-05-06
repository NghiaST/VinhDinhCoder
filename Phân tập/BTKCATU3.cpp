#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define getBIT(x,i) ((x>>i)&1)
#define setBIT(x,i) (x|(1<<i))
using namespace std;
long long n, k, w[40], v[40], _size[2];
pair<long long, long long> f[2][1048576];
bool avail[1048577];
long long res;
struct Data{long long wei, val; int z; };

void Solve(int l, int r, int ok) {
    int cnt = r-l;
    queue<Data> Q;
    Q.push({0,0,0});
    avail[0] = true;
    while (!Q.empty()) {
        Data t = Q.front(); Q.pop();
        f[ok][t.z] = make_pair(t.wei, t.val);
        for(int j=0; j<cnt; j++) if (!getBIT(t.z, j) && !avail[setBIT(t.z, j)]) {
            Q.push({t.wei + w[j+l], t.val + v[j+l], setBIT(t.z, j)});
            avail[setBIT(t.z, j)] = true;
        }
    }
    _size[ok] = 1<<cnt;
    sort(f[ok], f[ok]+(1<<cnt));
    long long val = 0;
    for(int i=1; i<(1<<cnt); i++) {
        if (val < f[ok][i].second) val = f[ok][i].second;
        else f[ok][i].second = val;
    }
}

int main()
{
    scanf("%lld%lld", &n, &k);
    for(int i=0; i<n; i++) scanf("%lld%lld", &w[i], &v[i]);
    int mid = n/2;
    Solve(0, mid, 0);
    fill(avail, avail + (1<<(n-mid)), false);
    Solve(mid, n, 1);
    for(int i=0, l=_size[1]-1; i<_size[0]; i++) {
        while (l>=0 && f[0][i].first + f[1][l].first > k) l--;
        if (l<0) break;
        res = max(res, f[0][i].second + f[1][l].second);
    }
    cout << res;
}
    

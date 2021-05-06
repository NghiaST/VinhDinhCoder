#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define getBIT(x,i) ((x>>i)&1)
#define setBIT(x,i) (x|(1<<i))
using namespace std;
long long n, k, a[40], _size[2];
pair<long long,int> f[2][1048577];
bool avail[1048577];
struct Data{long long x; int y,z;};
int res, cmin = 1e9;

void Solve(int l, int r, int ok) {
    int cnt = r-l;
    queue<Data> Q;
    Q.push({0,0,0});
    avail[0] = true;
    while (!Q.empty()) {
        Data w = Q.front(); Q.pop();
        f[ok][w.y] = make_pair(w.x, w.z);
        for(int j=0; j<cnt; j++) if (!getBIT(w.y, j) && !avail[setBIT(w.y, j)]) {
            Q.push({w.x + a[j+l], setBIT(w.y, j), w.z+1});
            avail[setBIT(w.y, j)] = true;
        }
    }
    _size[ok] = 1<<cnt;
    sort(f[ok], f[ok]+(1<<cnt));
}

int main()
{
    scanf("%lld%lld", &n, &k);
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);
    int mid = n/2;
    Solve(0, mid, 0);
    fill(avail, avail + (1<<(n-mid)), false);
    Solve(mid, n, 1);
    vector<int> Q;
    for(int i=0, l=_size[1]-1, r=_size[1]-1; i<_size[0]; i++) {
        while (l>=0 && f[0][i].first + f[1][l].first >= k) l--;
        while (r>=0 && f[0][i].first + f[1][r].first > k) r--;
        if (r > l) {
            res += r-l;
            cmin = min(cmin, f[0][i].second + f[1][l+1].second);
        }
    }
    if (res) cout << res << ' ' << cmin;
    else cout << "KHONG CHON DUOC";
}
    

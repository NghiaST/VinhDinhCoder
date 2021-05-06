#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#define getBIT(x,i) ((x>>i)&1)
#define setBIT(x,i) (x|(1<<i))
using namespace std;
long long n, k, a[40], _size[2], f[2][1048577];
bool avail[1048577];
struct Data{long long x,y,z;};
long long sum, cmax;

void Solve(int l, int r, int ok) {
    int cnt = r-l;
    queue<pair<long long,int>> Q;
    Q.emplace(0,0);
    avail[0] = true;
    while (!Q.empty()) {
        pair<long long,int> w = Q.front(); Q.pop();
        f[ok][w.second] = w.first;
        for(int j=0; j<cnt; j++) if (!getBIT(w.second, j) && !avail[setBIT(w.second, j)]) {
            Q.emplace(w.first + a[j+l], setBIT(w.second, j));
            avail[setBIT(w.second, j)] = true;
        }
    }
    _size[ok] = 1<<cnt;
    sort(f[ok], f[ok]+(1<<cnt));
}

int main()
{
    scanf("%lld", &n);
    for(int i=0; i<n; i++) scanf("%lld", &a[i]), sum += a[i];
    k = sum/2;
    int mid = n/2;
    Solve(0, mid, 0);
    fill(avail, avail + (1<<(n-mid)), false);
    Solve(mid, n, 1);
    vector<int> Q;
    for(int i=0, l=_size[1]-1; i<_size[0]; i++) {
        while (l>=0 && f[0][i] + f[1][l] > k) l--;
        if (l<0) break;
        cmax = max(cmax, f[0][i] + f[1][l]);
    }
    cout << sum - cmax*2;
}
    

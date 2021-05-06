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

void Solve(int l, int r, int ok) {
    int cnt = r-l;
    queue<pair<long long,int>> Q;
    Q.emplace(0, 0);
    avail[0] = true;
    while (!Q.empty()) {
        pair<long long,int> x = Q.front(); Q.pop();
        f[ok][x.second] = x;
        for(int j=0; j<cnt; j++) if (!getBIT(x.second, j) && !avail[setBIT(x.second, j)]) {
            Q.emplace(x.first + a[j+l], setBIT(x.second, j));
            avail[setBIT(x.second, j)] = true;
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
    for(int i=0, l=_size[1]-1; i<_size[0]; i++) {
        while (l>=0 && f[0][i].first + f[1][l].first > k) l--;
        if (f[0][i].first + f[1][l].first == k) {
            cout << "YES\n";
            int q1 = f[0][i].second, q2 = f[1][l].second;
            for(int j=0; j<mid; j++) if (getBIT(q1, j)) Q.push_back(j+1);
            for(int j=mid; j<n; j++) if (getBIT(q2, j-mid)) Q.push_back(j+1);
            cout << Q.size() << '\n';
            for(int v : Q) cout << v << ' ';
            return 0;
        }
    }
    cout << "NO";
}
    

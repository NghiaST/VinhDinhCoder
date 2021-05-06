#include <iostream>
#include <algorithm>
#include <queue>
#define getBIT(x,i) ((x>>i)&1)
#define setBIT(x,i) (x|(1<<i))
using namespace std;
long long n, k, a[40], f[2][1048577], _size[2];
int avail[1048577];

void Solve(int l, int r, int ok) {
    int cnt = r-l;
    queue<pair<long long,int>> Q;
    Q.emplace(0, 0);
    avail[0] = ok;
    while (!Q.empty()) {
        pair<long long,int> x = Q.front(); Q.pop();
        f[ok][x.second] = x.first;
        for(int j=0; j<cnt; j++) if (!getBIT(x.second, j) && avail[setBIT(x.second, j)]^ok) {
            Q.emplace(x.first + a[j+l], setBIT(x.second, j));
            avail[setBIT(x.second, j)] = ok;
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
    Solve(mid, n, 1);
    Solve(0, mid, 0);
    for(int i=0, l=_size[1]-1; i<_size[0]; i++) {
        while (l>=0 && f[0][i] + f[1][l] > k) l--;
        if (f[0][i] + f[1][l] == k) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}
    

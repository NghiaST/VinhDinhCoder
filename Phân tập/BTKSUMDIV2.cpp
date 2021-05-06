#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
long long n, k, res, a[43];
vector<pair<long long,long long>> f[2];

void Solve(int x, long long sum, long long sl, int ok, int r) {
    if (x == r) {
        f[ok].emplace_back(sum, sl);
        return;
    }
    Solve(x+1, sum, sl, ok, r);
    Solve(x+1, (sum+a[x]) % k, sl+1, ok, r);
}

int main()
{
    scanf("%lld%lld", &n, &k);
    for(int i=0; i<n; i++) scanf("%lld", &a[i]);

    int mid = n/2;
    Solve(0, 0, 0, 0, mid);
    sort(f[0].begin(), f[0].end());
    Solve(mid, 0, 0, 1, n);
    sort(f[1].begin(), f[1].end());

    int pp = f[0].size();
    for(int i=0, l=f[1].size()-1; i<pp; i++) {
        while (l>=0 && f[0][i].first + f[1][l].first > k) l--;
        if (l<0) break;
        if (f[0][i].first + f[1][l].first == k) res = max(res, f[0][i].second + f[1][l].second);
    }
    int i1 = 0; while (i1 < pp && f[0][i1].first == 0) i1++;
    pp = f[1].size();
    int i2 = 0; while (i2 < pp && f[1][i2].first == 0) i2++;
    if (i1 && i2) res = max(res, f[0][i1-1].second + f[1][i2-1].second);
    cout << res;
}
    

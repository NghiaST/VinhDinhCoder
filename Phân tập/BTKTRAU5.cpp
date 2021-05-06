#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, a[23];
long long res;
vector<pair<long long,long long>> f[2];

void Solve(int x, long long val, long long sum, int ok, int r) {
    if (x == r) {
        f[ok].emplace_back(val, sum);
        return;
    }
    Solve(x+1, val, sum, ok, r);
    Solve(x+1, val-a[x], sum+a[x], ok, r);
    Solve(x+1, val+a[x], sum+a[x], ok, r);
}

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int mid = n/2;
    Solve(0, 0, 0, 0, mid);
    sort(f[0].begin(), f[0].end());
    Solve(mid, 0, 0, 1, n);
    sort(f[1].begin(), f[1].end());

    for(int i=f[0].size()-1, l=f[1].size()-1; i; i--) {
        while (l>=0 && f[0][i].first < f[1][l].first) l--;
        if (l<0) break;
        if (f[0][i].first == f[1][l].first) res = max(res, f[0][i].second + f[1][l].second);
    }
    cout << res/2;
}
    

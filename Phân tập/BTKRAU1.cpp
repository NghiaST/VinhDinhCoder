#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n, a[23];
long long res;
vector<long long> f[2];

void Solve(int x, long long val, int ok, int r) {
    if (x == r) {
        f[ok].push_back(val);
        return;
    }
    Solve(x+1, val, ok, r);
    Solve(x+1, val-a[x], ok, r);
    Solve(x+1, val+a[x], ok, r);
}

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);

    int mid = n/2;
    Solve(0, 0, 0, mid);
    sort(f[0].begin(), f[0].end());
    Solve(mid, 0, 1, n);
    sort(f[1].begin(), f[1].end());

    for(int i=f[0].size()-1, l=f[1].size()-1, r=f[1].size()-1; i>=0; i--) {
        int p = f[0][i];
        while (l>=0 && f[0][i] <= f[1][l]) l--;
        while (r>=0 && f[0][i] < f[1][r]) r--;
        if (l<r) res += r-l;
    }
    cout << res-1;
}
    

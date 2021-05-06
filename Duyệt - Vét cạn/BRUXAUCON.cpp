#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 256
using namespace std;
long long n, m, k, r, res, f[N];
char c;

int main() {
    cin >> n >> m >> k;
    getchar();
    FOR(i, 1, n) {
        c = getchar();
        if (c == 'A') f[++r] = i;
        if (r >= k) res += max(i-m+1, f[r-k+1]) - max(i-m+2, f[r-k] + 1) + 1;
    }
    cout << res;
}
    

#include <iostream>
using namespace std;
const int MOD = 1e9 + 7;
int n, k, f[200005], l[12], r[12];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=k; ++i) cin >> l[i] >> r[i], ++r[i];
    f[1] = 1;
    for(int i=2; i<=n; ++i) {
        for(int j=1; j<=k; ++j) {
            if (l[j] < i) (f[i] += f[i - l[j]]) %= MOD;
            if (r[j] < i) (f[i] += MOD - f[i - r[j]]) %= MOD;
        }
        if (i != n) (f[i] += f[i-1]) %= MOD;
    }
    cout << f[n];
}
    

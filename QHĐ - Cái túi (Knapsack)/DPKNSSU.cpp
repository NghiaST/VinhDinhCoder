#include <iostream>
using namespace std;
int n, m, k, x, val[10005], f[10005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m >> k;
    val[0] = 1;
    for(int i=1; i<=n && val[m] != k; i++) {
        cin >> x;
        for(int j=m; j>=x; j--) {
            f[j] = max(f[j], f[j-x] + x);
            if (f[j-x] + x == j) val[j] = min(k, val[j] + val[j-x]);
        }
    }
    if (val[m] == k) cout << "ENOUGH"; else cout << val[m];
}
    

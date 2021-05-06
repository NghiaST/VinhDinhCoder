#include <iostream>
#include <algorithm>
using namespace std;
int t, n, g[100005];
long long f[100005];
struct Data{
    int x, y, z;
    bool operator < (Data &other) { return y < other.y; }
} a[100005];
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=1; i<=n; i++) {
            cin >> a[i].x >> a[i].y >> a[i].z;
            a[i].y += a[i].x - 1;
        }
        sort(a+1, a+n+1);
        for(int i=1; i<=n; i++) g[i] = a[i].y;
        for(int i=1; i<=n; i++) {
            int p = lower_bound(g, g+i, a[i].x) - g - 1;
            f[i] = max(f[p] + a[i].z, f[i-1]);
        }
        cout << f[n] << '\n';
    }
}
    

#include <iostream>
using namespace std;
int n, a[10005], v[10005];
long long f[10005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=4; i<=n+3; i++) cin >> a[i];
    for(int i=4; i<=n+3; i++) {
        f[i] = f[i-1]; v[i] = v[i-1];
        if (f[i] < f[i-2] + a[i] || f[i] == f[i-2] + a[i] && v[i] > v[i-2] + 1) {
            f[i] = f[i-2] + a[i];
            v[i] = v[i-2] + 1;
        }
        if (f[i] < f[i-4] + a[i-2] + a[i] || f[i] == f[i-4] + a[i-2] + a[i] && v[i] > v[i-4] + 2) {
            f[i] = f[i-4] + a[i-2] + a[i];
            v[i] = v[i-4] + 2;
        }
        if (f[i] < f[i-3] + a[i-1] + a[i] || f[i] == f[i-3] + a[i-1] + a[i] && v[i] > v[i-3] + 2) {
            f[i] = f[i-3] + a[i-1] + a[i];
            v[i] = v[i-3] + 2;
        }
    }
    cout << v[n+3] << ' ' << f[n+3];
}
    

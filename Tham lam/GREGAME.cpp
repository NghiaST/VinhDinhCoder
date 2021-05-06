#include <iostream>
using namespace std;
int t, n, m, k, a[105];
long long res;
int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%d", &n, &m, &k);
        for(int i=0; i<n; i++) scanf("%d", &a[i]);
        int ok = true;
        for(int i=1; i<n; i++) {
            if (m + k + a[i-1] < a[i]) {
                ok = false;
                break;
            }
            m += a[i-1] - max(0, a[i] - k);
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}
    

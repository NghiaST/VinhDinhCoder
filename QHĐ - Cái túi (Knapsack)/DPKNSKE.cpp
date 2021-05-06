#include <iostream>
using namespace std;
int t, n, m, sum, a[105], f[50005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        sum = 0;
        for(int i=1; i<=n; i++) cin >> a[i], sum += a[i];
        m = sum/2;
        for(int i=0; i<=m; i++) f[i] = 0;
        for(int i=1; i<=n; i++) {
            for(int j=m; j>=a[i]; j--)
                f[j] = max(f[j], f[j-a[i]] + a[i]);
        }
        cout << sum - f[m]*2 << '\n';
    }
}
    

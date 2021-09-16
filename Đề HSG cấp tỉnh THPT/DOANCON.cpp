#include <iostream>
using namespace std;
int t, n, x, ans[1000005], a[1000005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n;
        for(int i=1; i<=n; ++i) cin >> x, a[i] = (x > 0 ? 1 : -1);
        ans[n] = 1;
        for(int i=n-1; i; --i) ans[i] = ans[i+1] * (a[i] != a[i+1]) + 1;
        for(int i=1; i<=n; ++i) cout << ans[i] << ' ';
        cout << '\n';
    }
}
    

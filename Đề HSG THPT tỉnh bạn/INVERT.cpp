#include <iostream>
using namespace std;
int n, q, a[1005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> q;
    for(int i=1; i<=n; ++i) cin >> a[i];
    while (q--) {
        int u, v, ans = 0;
        cin >> u >> v;
        for(int i=u; i<=v; ++i)
        for(int j=i+1; j<=v; ++j)
            ans += a[i] > a[j];
        cout << ans << '\n';
    }
}

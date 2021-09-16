#include <iostream>
#include <algorithm>
using namespace std;
int n, m, ans, a[100005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i=1; i<=n; ++i) cin >> a[i];
    sort(a+1, a+n+1);
    for(int i=1, j=n; i<=n; ++i) {
        while (j > i && a[i] + a[j] > m) --j;
        if (i == j) break;
        ans = max(ans, a[i] + a[j]);
    }
    cout << ans;
}
    

#include <iostream>
#include <algorithm>
using namespace std;
int n, cnt, res, ok[100005], a[100005], p[100005], p2[100005];
long long k;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (a[i] == a[i-1]) p[cnt]++;
        else a[++cnt] = a[i], p[cnt] = 1;
    }
    if (k == 1) { cout << cnt; return 0; }
    for(int i=1, x=1; i<=cnt; i++) {
        while (a[x]*k < a[i]) x++;
        if (a[x]*k == a[i]) {
            p[i] = max(p2[x] + p[i], p[x]);
            p2[i] = max(p2[x], p[x]);
            ok[x] = true;
        }
    }
    for(int i=1; i<=cnt; i++) if (!ok[i]) res += p[i];
    cout << res;
}
    

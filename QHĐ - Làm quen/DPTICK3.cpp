#include <iostream>
#include <algorithm>
using namespace std;
int n, ss, ff, L1, L2, L3, C1, C2, C3, a[10005], vss, vff;
long long f[10005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> L1 >> L2 >> L3 >> C1 >> C2 >> C3 >> n >> ss >> ff;
    if (ss > ff) swap(ss, ff);
    for(int i=2; i<=n; i++) cin >> a[i];
    vss = a[ss], vff = a[ff];
    sort(a+1, a+n+1);
    ss = lower_bound(a+1, a+n+1, vss) - a;
    ff = lower_bound(a+1, a+n+1, vff) - a;
    for(int i=ss+1; i<=ff; i++) {
        if (a[i] == a[i-1]) { f[i] = f[i-1]; continue; }
        f[i] = 1e14;
        int p1 = lower_bound(a+ss, a+ff, a[i] - L1) - a;
        int p2 = lower_bound(a+ss, a+ff, a[i] - L2) - a;
        int p3 = lower_bound(a+ss, a+ff, a[i] - L3) - a;
        f[i] = min(f[p1] + C1, min(f[p2] + C2, f[p3] + C3));
    }
    cout << f[ff];
}
    

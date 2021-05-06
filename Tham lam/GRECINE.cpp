#include <iostream>
#include <algorithm>
using namespace std;
int n, k, s, t, res, c[200005], v[200005], a[200005];

bool check(long long x) {
    long long times = s;
    for(int i=1; i<=k; i++) {
        int sl = a[i] - a[i-1];
        if (x < sl) return false;
        times += max(0ll, sl*2-x);
    }
    return times <= t;
}

int main()
{
    scanf("%d%d%d%d", &n, &k, &s, &t);
    for(int i=1; i<=n; i++) scanf("%d%d", &c[i], &v[i]);
    for(int i=1; i<=k; i++) scanf("%d", &a[i]);
    sort(a+1, a+k+1);
    a[++k] = s;
    long long l=1, r=2e9;
    while (l<r) {
        int mid=(l+r)/2;
        if (check(mid)) r=mid; else l=mid+1;
    }
    c[0] = 2e9;
    for(int i=1; i<=n; i++) if (c[i] < c[res] && v[i] >= l) res = i;
    if (!res) cout << -1; else cout << c[res];
}
    

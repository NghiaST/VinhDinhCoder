#include <iostream>
#include <algorithm>
using namespace std;
long long n, k, x, res, ok, av[200005], Ans[200005];
pair<long long,int> a[200005];

bool check(long long d) {
    long long cnt=0;
    for(int i=1; i<=n && a[i].first<d; i++) {
        cnt += (d - a[i].first - 1 + x) / x;
    }
    return cnt<=k;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n >> k >> x;
    for(int i=1; i<=n; i++) {
        int v;
        cin >> v;
        if (v < 0) av[i] = 1, v = -v, ok^=1;
        a[i] = make_pair(v, i);
    }
    sort(a+1, a+n+1);
    for(int i=1; i<=n && !a[i].first && k; i++) {
        a[i].first = x;
        if (!ok) ok = 1, av[a[i].second] ^= 1;
        k--;
    }
    if (!ok) {
        long long q = min(k, (a[1].first+x)/x);
        a[1].first -= q*x;
        k -= q;
        if (a[1].first < 0) ok=1, a[1].first = -a[1].first, av[a[1].second] ^= 1;
    }
    sort(a+1, a+n+1);
    long long l=0, r=1e15, mid;
    while (l<r) {
        mid = (l+r+1) / 2;
        if (check(mid)) l = mid; else r = mid-1;
    }
    for(int i=1; i<=n && a[i].first<l; i++) {
        int p = (l - a[i].first - 1 + x) / x;
        k -= p;
        a[i].first += p*x;
    }
    sort(a+1, a+n+1);
    for(int i=1; i<=k; i++) a[i].first+=x;
    for(int i=1; i<=n; i++) Ans[a[i].second] = (av[a[i].second] ? -1 : 1) * a[i].first;
    for(int i=1; i<=n; i++) cout << Ans[i] << ' ';
}
    

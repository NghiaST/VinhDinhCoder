#include <iostream>
#include <algorithm>
#include <set>
#define N 100005
using namespace std;
int n, cnt, val[N], p[N], sum, res;
struct Data {
    int L, d;
    bool operator < (Data &other) { return L<other.L; }
} a[N];
multiset<pair<int,int>, greater<pair<int,int>>> Q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i].L;
    for(int i=1; i<=n; i++) cin >> a[i].d, sum += a[i].d;
    for(int i=1; i<=n; i++) Q.insert(make_pair(a[i].d, a[i].L));
    sort(a+1, a+n+1);
    for(int i=1; i<=n; i++) {
        if (a[i].L != a[i-1].L) a[++cnt] = a[i];
        p[cnt]++; val[cnt] += a[i].d;
    }
    for(int i=cnt; i; i--) {
        int sl = p[i] - 1, fsum = val[i];
        for(auto v = Q.begin(); v != Q.end() && sl; ) {
            auto g = *v;
            if (v->second >= a[i].L) {
                auto e = v;
                ++v;
                Q.erase(e);
            } else {
                fsum += v->first;
                sl--;
                v++;
            }
        }
        res = max(res, fsum);
    }
    cout << sum - res;
}
    

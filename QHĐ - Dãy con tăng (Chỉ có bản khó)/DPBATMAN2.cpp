#include <iostream>
#include <algorithm>
using namespace std;
int t, n, k, vk, r, p, res;
long long a[100005], Q[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for(int i=1; i<=n; i++) cin >> a[i];
        r = 0;
        for(int i=1; i<=n; i++) {
            if (!r || Q[r] > a[i]) p = ++r;
            else p = lower_bound(Q+1, Q+r, a[i], greater<long long>()) - Q;
            Q[p] = a[i];
            if (i == k) vk = p;
        }
        res = r;
        r = 0;
        for(int i=k+1; i<=n; i++) {
            if (!r || Q[r] > a[i]) Q[++r] = a[i];
            else *lower_bound(Q+1, Q+r, a[i], greater<long long>()) = a[i];
        }
        cout << max(res, vk + r) << '\n';
    }
}
    

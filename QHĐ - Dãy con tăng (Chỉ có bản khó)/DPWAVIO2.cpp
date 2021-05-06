#include <iostream>
#include <algorithm>
using namespace std;
int n, r, p, res, a[100005], f1[100005], f2[100005], Q[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) {
        if (!r || Q[r] < a[i]) p = ++r;
        else p = lower_bound(Q+1, Q+r+1, a[i]) - Q;
        Q[p] = a[i];
        f1[i] = p-1;
    }
    r=0;
    for(int i=n; i; i--) {
        if (!r || Q[r] < a[i]) p = ++r;
        else p = lower_bound(Q+1, Q+r+1, a[i]) - Q;
        Q[p] = a[i];
        f2[i] = p-1;
    }
    res = 1;
    for(int i=1; i<=n; i++) {
        if (f1[i] && f2[i]) res = max(res, f1[i] + f2[i] + 1);
    }
    cout << res;
}
    

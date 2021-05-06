#include <iostream>
#include <algorithm>
using namespace std;
int n, r, p, res, a[100005], p1[100005], p2[100005], Q[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=n; i; i--) {
        if (!r || Q[r] < a[i]) p = ++r;
        else p = lower_bound(Q+1, Q+r+1, a[i]) - Q;
        Q[p] = a[i];
        p1[i] = p;
    }
    r=0;
    for(int i=n; i; i--) {
        if (!r || Q[r] > a[i]) p = ++r;
        else p = lower_bound(Q+1, Q+r+1, a[i], greater<int>()) - Q;
        Q[p] = a[i];
        p2[i] = p;
    }
    for(int i=1; i<=n; i++) res = max(res, p1[i] + p2[i] - 1);
    cout << res;
}
    

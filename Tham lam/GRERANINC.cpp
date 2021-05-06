#include <iostream>
using namespace std;
int n, r, res, cnt, a[100005], Q[100005], p[100005];
int Size[100005];
pair<int,int> Ans[100005];

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) {
        while (r && Q[r] >= a[i]) {
            Ans[++cnt] = make_pair(p[r-1]+1, i-1);
            res += (Size[cnt] = Q[r] - max(Q[r-1], a[i]));
            r--;
        }
        Q[++r] = a[i];
        p[r] = i;
    }
    while (r) {
        Ans[++cnt] = make_pair(p[r-1]+1, n);
        res += (Size[cnt] = Q[r] - Q[r-1]);
        r--;
    }
    cout << res << '\n';
    for(int i=1; i<=cnt; i++) {
        while (Size[i]--) cout << Ans[i].first << ' ' << Ans[i].second << '\n';
    }
}
    

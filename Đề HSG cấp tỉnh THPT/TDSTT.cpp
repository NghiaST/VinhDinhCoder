#include <iostream>
using namespace std;
int n, x, res, ans[100005], Map[100005];
int r, f[100005], P[100005];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i=2; i<=100000; ++i) {
        if (!f[i]) f[i] = P[++r] = i;
        int j = 1;
        while (j <= r && P[j] <= f[i] && P[j] * i <= 100000)
            f[P[j] * i] = P[j], ++j;
    }
    cin >> n;
    for(int i=1; i<=n; ++i) {
        cin >> x;
        ans[i] = 1;
        for(int j=x; j>1; j/=f[j])
            if (Map[f[j]]) ans[i] = max(ans[i], ans[Map[f[j]]] + 1);
        for(int j=x; j>1; j/=f[j])
            Map[f[j]] = i;
        res = max(res, ans[i]);
    }
    cout << res;
}
    

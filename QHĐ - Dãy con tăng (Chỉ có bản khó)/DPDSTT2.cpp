#include <iostream>
using namespace std;
int n, res, cnt, f[1000005], prime[1000005], g[1000005];

void eratos() {
    for(int i=2; i<=1000000; i++) {
        if (!f[i]) prime[++cnt] = f[i] = i;
        int j = 1;
        while (j<=cnt && prime[j]<=f[i] && prime[j]*i<=1000000) {
            f[prime[j]*i] = prime[j];
            j++;
        }
    }
}

int getBIT(int x) {
    int val = 0;
    while (x>1) {
        int v = f[x];
        val = max(val, g[v]);
        while (x%v==0) x/=v;
    }
    return val;
}

void update(int x, int val) {
    while (x>1) {
        int v = f[x];
        g[v] = val;
        while (x%v==0) x/=v;
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    eratos();
    cin >> n;
    int x;
    for(int i=1; i<=n; i++) {
        cin >> x;
        int val = getBIT(x) + 1;
        update(x, val);
        res = max(res, val);
    }
    cout << res;
}
    

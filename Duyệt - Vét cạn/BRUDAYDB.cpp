#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 1505
using namespace std;
int n, r, cnt, f[N], prime[N], Q[N];
char c;

void eratos() {
    int NN = n;
    f[0] = f[1] = -1;
    for(int i=2; i<=NN; i++) {
        if (!f[i]) prime[++r] = f[i] = i;
        int j = 1;
        while (j <= r && prime[j] <= f[i] && prime[j]*i <= NN) {
            f[prime[j]*i] = prime[j];
            j++;
        }
    }
}

bool check(int x) {
    FOR(i, 1, cnt) if (Q[i] % x == 0) return true;
    return false;
}

int main() {
    cin >> n;
    eratos();
    Q[++cnt] = n;
    while (--n) {
        if (f[n] == n || check(n)) Q[++cnt] = n;
    }
    cout << cnt << '\n';
    FOR(i, 1, cnt) cout << Q[i] << ' ';
}
    

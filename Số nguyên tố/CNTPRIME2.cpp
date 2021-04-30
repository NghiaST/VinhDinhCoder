#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int L, R, cnt, f[1000005], prime[1000005], a[1000005];
long long res;

void eratos() {
    for(long long i=2; i*i <= R; i++) {
        if (!f[i]) prime[++cnt] = f[i] = i;
        int j = 1;
        while (j <= cnt && prime[j] <= f[i] && prime[j]*i*prime[j]*i <= R) {
            f[prime[j]*i] = prime[j];
            j++;
        }
    }
}

void Process() {
    if (L == 1) a[0] = true;
    FOR(i, 1, cnt)
        for(int j = max(prime[i]*prime[i], (L + prime[i] - 1) / prime[i]*prime[i]); j <= R; j += prime[i]) a[j - L] = true;
    FOR(i, L, R) if (!a[i - L]) res++;
    cout << res;
}

int main() {
    cin >> L >> R;
    eratos();
    Process();
}
    

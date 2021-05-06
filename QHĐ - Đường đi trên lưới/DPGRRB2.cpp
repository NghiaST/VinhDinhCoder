#include <iostream>
#include <algorithm>
#define x first
#define y second
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
const int mod = 1e9+7, N = 200005;
int m, n, p, res;
pair<int,int> a[N];
long long F[N], nF[N], f[N];

int power(int x, int k) {
    if (!k) return 1;
    long long d = power(x, k/2);
    d = d * d % mod;
    if (k&1) d = d * x % mod;
    return d;
}

void Init() {
    F[0] = nF[0] = 1;
    for(int i=1; i<=200000; i++) {
        F[i] = (F[i-1]*i) % mod;
        nF[i] = (nF[i-1]*power(i, mod-2)) % mod;
    }
}

void Enter() {
    cin >> m >> n >> p;
    for(int i=1; i<=p; i++) cin >> a[i].x >> a[i].y;
    sort(a+1, a+p+1);
}

int getC(int x, int y) { return F[x+y] * nF[x] % mod * nF[y] % mod; }

void Process() {
    for(int i=1; i<=p; i++) {
        int val = 0;
        for(int j=1; j<i; j++)
            if (a[j].y <= a[i].y) val = (val + getC(a[i].x - a[j].x, a[i].y - a[j].y) * f[j]) % mod;
        f[i] = (getC(a[i].x - 1, a[i].y - 1) - val + mod) % mod;
        res = (res + getC(m - a[i].x, n - a[i].y) * f[i]) % mod;
    }
    cout << (getC(m-1, n-1) - res + mod) % mod;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    Init();
    Enter();
    Process();
}
    

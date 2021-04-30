P#include <iostream>
#include <algorithm>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
llong n, res, sum, r, a[N], b[N], f[N];

void Enter() {
    scanf("%I64d", &n);
    FOR(i,1,n) scanf("%I64d", &a[i]);
}

void eratos() {
    int NN = 33000;
    FOR(i,2,NN) if (!f[i]) {
        b[++r] = i;
        FOR(j,i,NN/i) f[i*j] = true;
    }
}

bool check_prime(llong x) {
    for(llong i=1; b[i]*b[i] <= x; i++) if (x%b[i] == 0) return false;
    return true;
}

void Process() {
    sort(a+1, a+n+1);
    a[0] = 1;
    FOR(i,1,n) {
        if (a[i] == a[i-1]) res += (f[i] = f[i-1]);
        else res += (f[i] = check_prime(a[i]));
    }
    cout << res * (n - res - 1) + res*(res+1) / 2;
}

int main()
{
    Enter();
    eratos();
    Process();
}
    

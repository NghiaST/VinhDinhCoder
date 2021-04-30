#include <iostream>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
llong n, res, sum, r, a[5000005], b[5000005];

void eratos() {
    int NN = n/2;
    FOR(i,2,NN) if (!a[i]) {
        b[++r] = i;
        FOR(j,i,NN/i) a[i*j] = true;
    }
}

bool check_prime(llong x) {
    for(llong i=2; i*i <= x; i++) if (x%i == 0) return false;
    return true;
}

void Process() {
    int l=1;
    FORD(i,r,1) {
        while (l <= r && b[l]*b[i] <= n) sum += b[l++];
        res += sum * b[i];
        if (l > i) res += b[i]*b[i];
    }
    cout << n << ' ' << res / 2;
}

int main()
{
    scanf("%I64d", &n);
    eratos();
    Process();
}
    

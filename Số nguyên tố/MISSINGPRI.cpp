#include <iostream>
#include <algorithm>
#include <cmath>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 2000005
using namespace std;
int n, res, sum, r, vmax, a[N], b[N], f[N];

void Enter() {
    int x;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &x);
        f[x] = true;
        vmax = max(vmax, x);
    }
}

void eratos() {
    int NN = vmax;
    FOR(i,2,NN) if (!a[i]) {
        if (!f[i]) { cout << i; return; }
        FOR(j,i,NN/i) a[i*j] = true;
    }
    cout << "No prime number missing!";
}

bool check_prime(llong x) {
    for(llong i=1; b[i]*b[i] <= x; i++) if (x%b[i] == 0) return false;
    return true;
}

int main()
{
    Enter();
    eratos();
}
    
